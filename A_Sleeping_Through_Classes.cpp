#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int t=0,ans=0;
    for(char c:s){
        if(c=='1') t=k;
        else ans+=--t<0;
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