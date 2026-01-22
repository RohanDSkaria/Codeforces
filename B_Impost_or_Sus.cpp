#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int n=s.size(),ans=(s[0]=='u')+(s[n-1]=='u');
    s[0]=s[n-1]='s';
    for(int i=1; i<n-1; i++){
        if(s[i]=='s') continue;
        if(s[i+1]=='u'){
            s[i+1]='s';
            ans++;
        }
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