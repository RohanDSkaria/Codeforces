#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    if(a&b&1) cout<<a*b+1<<'\n';
    else if(b&1 || (a&1 && b&3)) cout<<"-1\n";
    else cout<<(a*b)/2+2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/