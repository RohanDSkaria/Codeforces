#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n),x(m);
    for(int& i:a) cin>>i;
    int co=0,ce=0;
    for(int& i:x){
        cin>>i;
        i&1?co++:ce++;
    }
    vector<int> o,e;
    for(int i=0; i<n; i++){
        if(i&1) e.push_back(a[i]);
        else o.push_back(a[i]);
    }
    sort(o.rbegin(),o.rend());
    sort(e.rbegin(),e.rend());
    auto fn=[](vector<int>& a, int c){
        if(!c || !a.size()) return 0ll;
        c=min(c,(int)a.size());
        int sum=0,k=0;
        for(int i=0; i<c && a[i]>0; i++){
            sum+=a[i];
            k++;
        }
        if(!k) sum=a[0];
        return sum;
    };
    cout<<accumulate(a.begin(),a.end(),0ll)-fn(o,co)-fn(e,ce)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/