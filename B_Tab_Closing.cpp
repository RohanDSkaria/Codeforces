#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,n;cin>>a>>b>>n;
    cout<<1+(b<a && a<b*n)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/