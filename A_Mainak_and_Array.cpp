#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int ans=0;
    for(int i=0; i<n; i++){
        ans=max(ans,a[(i+n-1)%n]-a[i]);
        ans=max(ans,a[n-1]-a[i]);
        ans=max(ans,a[i]-a[0]);
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