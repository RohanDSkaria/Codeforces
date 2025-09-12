#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int k=n/2,ans=-(n&1);
    for(int i=k; i<n; i++){
        if(s[i]==s[k]) ans+=2;
        else break;
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