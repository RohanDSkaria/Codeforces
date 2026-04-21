#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s,t;cin>>s>>t;
    int a=s[0]!=t[0],b=0;
    for(int i=1; i<n; i++){
        int k=min(a+(s[i]!=t[i]),b+(s[i]!=s[i-1])+(t[i]!=t[i-1]));
        b=a;
        a=k;
    }
    cout<<a<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/