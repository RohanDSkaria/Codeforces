#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int n=s.size();
    for(int i=0; i<n; i+=2){
        if(s[i]=='.') cout<<0,i--;
        else cout<<2-(s[i+1]=='.');
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/