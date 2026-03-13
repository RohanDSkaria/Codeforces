#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=1,t=1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]) t++;
        else t=1;
        ans=max(ans,t);
    }
    cout<<ans+1<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/