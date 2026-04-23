#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int u=0,l=0;
    for(char c:s) isupper(c)?u++:l++;
    for(char& c:s) c=u>l?toupper(c):tolower(c);
    cout<<s<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/