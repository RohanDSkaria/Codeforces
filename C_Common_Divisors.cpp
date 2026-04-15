#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int g=0,ans=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        g=__gcd(g,x);
    }
    for(int i=1; i*i<=g; i++) if(g%i==0) ans+=2-(i*i==g);
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/