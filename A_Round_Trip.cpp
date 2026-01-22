#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int r,x,d,n;cin>>r>>x>>d>>n;
    string s;cin>>s;
    int ans=0;
    for(char c:s){
        if(c=='1' || r<x){
            ans++;
            r=max(0ll,r-d);
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