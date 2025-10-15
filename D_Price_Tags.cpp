#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,y;cin>>n>>y;
    const int M=2e5+1;
    vector<int> a(n),f(M),pre(M);
    for(int &i:a){
        cin>>i;
        f[i]++;
    }
    for(int i=1; i<M; i++) pre[i]=f[i]+pre[i-1];
    int ans=LLONG_MIN;
    for(int x=2; x<M; x++){
        int c=0,t=0;
        for(int i=1; (i-1)*x<M; i++){
            int v=pre[min(M-1,i*x)]-pre[(i-1)*x];
            c+=max(0ll,i*v);
            t+=max(0ll,v-f[i]);
        }
        ans=max(ans,c-y*t);
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