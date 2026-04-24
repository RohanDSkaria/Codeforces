#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s,t;cin>>s>>t;
    int n=s.size();
    for(int i=0; i<n; i++) cout<<(s[i]==t[i]?'0':'1');
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/