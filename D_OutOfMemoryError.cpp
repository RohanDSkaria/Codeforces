#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,h;cin>>n>>m>>h;
    vector<int> a(n),d(n);
    for(int& i:a) cin>>i;
    set<int> s;
    while(m--){
        int b,c;cin>>b>>c;
        b--;
        d[b]+=c;
        s.insert(b);
        if(d[b]+a[b]>h){
            for(int i:s) d[i]=0;
            s.clear();
        }
    }
    for(int i=0; i<n; i++) cout<<a[i]+d[i]<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/