#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    vector<int> a(7);
    for(int& i:a) cin>>i;
    sort(a.begin(),a.end());
    int ans=0;
    for(int i=0; i<6; i++) ans-=a[i];
    cout<<ans+a[6]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/