#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n-1);
    for(int& i:a) cin>>i;
    int ans=0,x,y;cin>>x>>y;
    x--;y--;
    for(int i=x; i<y; i++) ans+=a[i];
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/