#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    map<int,int> m={{0,1}};
    int ans=0,c=0;
    for(int i=0; i<n; i++){
        c+=s[i]-'1';
        ans+=m[c]++;
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