#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int y,w;cin>>y>>w;
    int n=7-max(y,w),d=6,g=__gcd(n,d);
    cout<<n/g<<'/'<<d/g<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/