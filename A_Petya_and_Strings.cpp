#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s,t;cin>>s>>t;
    for(char& c:s) c=tolower(c);
    for(char& c:t) c=tolower(c);
    cout<<(s<t?"-1\n":(s==t?"0\n":"1\n"));
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/