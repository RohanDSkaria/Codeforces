#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    map<int,vector<int>> m;
    for(int i=0; i<n; i++){
        cin>>a[i];
        m[a[i]].push_back(i);
    }
    for(auto &[x,y]:m){
        if(y.size()%x){
            cout<<"-1\n";
            return;
        }
    }
    int k=0;
    for(auto &[x,y]:m){
        for(int i=0; i<y.size(); i++){
            k+=i%x==0;
            a[y[i]]=k;
        }
    }
    for(int i:a) cout<<i<<' ';
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