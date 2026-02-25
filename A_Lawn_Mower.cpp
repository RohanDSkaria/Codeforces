#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,w;cin>>n>>w;
    cout<<n-(n/w)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/