#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<vector<int>> adj(n+1);
    for(int i=1,u,v; i<n; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=n,cnt=0;
    for(int i=1; i<=n; i++) cnt+=adj[i].size()==1;
    for(int i=1; i<=n; i++){
        int t=cnt-(adj[i].size()==1);
        for(int j:adj[i]) t-=adj[j].size()==1;
        ans=min(ans,t);
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/