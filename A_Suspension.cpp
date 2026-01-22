#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,y,r;cin>>n>>y>>r;
    cout<<min(n,r+(y/2))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/