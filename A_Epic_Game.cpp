#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,n;cin>>a>>b>>n;
    int ya=0;
    while(n>=0) n-=__gcd((++ya&1)?a:b,n);
    cout<<(ya&1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/