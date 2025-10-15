#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    const int mod=998244353;
    int ans=2;
    for(int i=0; i<n; i++){
        if(a[i]>b[i]) swap(a[i],b[i]);
        if(i && a[i]>=b[i-1]) ans=(ans<<1)%mod;
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