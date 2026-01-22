#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int t=0,ans=INT_MAX;
    for(int i=1; i<n; i++) t+=abs(a[i]-a[i-1]);
    for(int i=0; i<n; i++){
        int k=t;
        if(i) k-=abs(a[i]-a[i-1]);
        if(i<n-1) k-=abs(a[i]-a[i+1]);
        if(i && i<n-1) k+=abs(a[i-1]-a[i+1]);
        ans=min(ans,k);
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