#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,n;cin>>x>>n;
    cout<<x*(n&1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/