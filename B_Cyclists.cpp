#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k,m,p;cin>>n>>k>>p>>m;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int cost=a[p-1],ans=cost<=m && p<=k;
    
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/