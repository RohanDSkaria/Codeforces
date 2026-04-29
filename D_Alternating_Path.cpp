#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> adj(n);
    vector<pair<bool,bool>> vis(n);
    while(m--){
        int u,v;cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    int ans=0,a,b;
    auto dfs=[&](auto&& fn, int v, int p, bool& ya) -> void {
        vis[v]={1,(p==-1?0:vis[p].second^1)};
        vis[v].second?b++:a++;
        for(int i:adj[v]){
            if(i==p) continue;
            if(vis[i].first){
                if(vis[i].second==vis[v].second) ya=0;
                continue;
            }
            fn(fn,i,v,ya);
        }
    };
    for(int i=0; i<n; i++){
        if(vis[i].first) continue;
        bool ya=1;
        a=b=0;
        dfs(dfs,i,-1,ya);
        if(ya) ans+=max(a,b);
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