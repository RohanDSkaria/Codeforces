#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int g=0,mx=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        g=__gcd(g,x);
        mx=max(mx,x);
    }
    cout<<(((mx/g)-n)&1?"Alice\n":"Bob\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/