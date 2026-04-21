#include <bits/stdc++.h>
using namespace std;
#define int long long

const int mod=998244353;
void solve(){
    int n,x;cin>>n>>x;
    cout<<(((x/4+1)%mod)*(((n+1)/4+1-(x/4+1)+mod)%mod)%mod+(((x+2)/4)%mod)*(((n+3)/4-(x+2)/4+mod)%mod)%mod)%mod<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/