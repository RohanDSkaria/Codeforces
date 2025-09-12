#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.rbegin(),a.rend());
    int ans=0;
    for(int i=0; i<min(n,m); i++) ans+=a[i]*(m-i);
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