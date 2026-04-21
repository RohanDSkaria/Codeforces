#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int a=n,b=0;
    for(int i=0; i<n; i++){
        if(s[i]=='A' && a==n) a=i;
        else if(s[i]=='B') b=i;
    }
    cout<<max(0ll,b-a)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/