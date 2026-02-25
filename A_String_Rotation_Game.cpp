#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=1;
    for(int j=0; j<n; j++){
        int c=1;
        for(int i=1; i<n; i++) c+=s[i]!=s[i-1];
        ans=max(ans,c);
        s=s.substr(1)+s[0];
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/