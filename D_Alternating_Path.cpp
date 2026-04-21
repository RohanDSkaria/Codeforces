#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    if(m==0){
        cout<<n<<'\n';
        return;
    }
    vector<vector<int>> adj(n);
    vector<int> vis(n);
    while(m--){
        int u,v;cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    auto dfs=[&](auto&& fn, int v, int p, int& a, int& b) -> void {
        vis[v]=1;
        for(int i:adj[v]){
            if(i==p) continue;
            if(vis[i]){
                if(cnt&1 && cnt>1) isEven=0;
                continue;
            }
            fn(fn,i,v,cnt+1,isEven);
        }
    };
    int ans=0;
    for(int i=0; i<n; i++){
        if(vis[i]) continue;
        int a=0,b=0;
        dfs(dfs,i,-1,a,b);
        ans+=max(a,b);
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