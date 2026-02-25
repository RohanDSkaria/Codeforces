#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    sort(a.begin(),a.end());
    for(int i=1; i<n; i++) b[i]+=b[i-1];
    int ans=0;
    for(int i=0; i<n; i++){
        auto it=lower_bound(b.begin(),b.end(),n-i)-b.begin()+1;
        if(b[it-1]>(n-i)) it--;
        ans=max(ans,a[i]*it);
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