#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> s(n),f(n);
    for(int &i:s) cin>>i;
    for(int &i:f) cin>>i;
    for(int i=0; i<n; i++) cout<<f[i]-(i?max(f[i-1],s[i]):s[i])<<" \n"[i==n-1];
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/