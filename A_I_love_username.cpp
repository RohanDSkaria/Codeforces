#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int ans=-2,mx=-1,mn=1e9;
    while(cin>>n){
        if(n>mx) mx=n,ans++;
        if(n<mn) mn=n,ans++;
    }
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