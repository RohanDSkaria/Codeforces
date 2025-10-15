#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int n=s.size(),ans=n;
    int one=count(s.begin(),s.end(),'1'),zero=n-one;
    for(int i=0,z=0,o=0; i<n; i++){
        s[i]=='1'?(o++,one--):(z++,zero--);
        ans=min({ans,o+zero,z+one});
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