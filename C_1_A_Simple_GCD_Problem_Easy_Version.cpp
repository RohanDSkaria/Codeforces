#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    for(int i:a) cin>>i;
    int ans=(__gcd(a[0],a[1])<a[0])+(__gcd(a[n-2],a[n-1])<a[n-1]);
    for(int i=1; i<n-1; i++) ans+=lcm(__gcd(a[i-1],a[i]),__gcd(a[i],a[i+1]))<a[i];
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