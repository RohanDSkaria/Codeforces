#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,a,b,x,y;cin>>n>>a>>b>>x>>y;
    int dx=abs(a-x),dy=abs(b-y);
    int ans=0,d=max(x,dy);
    if(a<d) ans=max(ans,d);
    d=max(n-x,dy);
    if(n-a<d) ans=max(ans,d);
    d=max(y,dx);
    if(b<d) ans=max(ans,d);
    d=max(n-y,dx);
    if(n-b<d) ans=max(ans,d);
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