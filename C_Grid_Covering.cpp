#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,a,b;cin>>n>>m>>a>>b;
    cout<<(__gcd(a,n)==1 && __gcd(b,m)==1 && __gcd(n,m)<3?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/