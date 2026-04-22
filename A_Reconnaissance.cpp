#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,d;cin>>n>>d;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    sort(a.begin(),a.end());
    int ans=0;
    for(int l=0,r=1; l<n; l++){
        while(r<n && a[r]-a[l]<=d) r++;
        ans+=r-l-1;
    }
    cout<<ans*2<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/