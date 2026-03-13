#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    for(int i=0; i<n; i++){
        if(s.substr(i,3)=="101") s[i+1]='1';
    }
    int mx=count(s.begin(),s.end(),'1'),mn=0;
    for(int l=0,r=0; l<n; l=r){
        while(r<n && s[l]==s[r]) r++;
        if(s[l]=='1') mn+=(r-l)/2+1;
    }
    cout<<mn<<' '<<mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/