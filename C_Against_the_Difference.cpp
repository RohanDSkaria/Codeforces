#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    vector<vector<int>> b(n+1);
    for(int i=0; i<n; i++) b[a[i]].push_back(i);
    vector<int> dp(n+1),cnt(n+1);
    for(int i=1; i<=n; i++){
        dp[i]=dp[i-1];
        int t=a[i-1],k=++cnt[t];
        if(k>=t) dp[i]=max(dp[i],dp[b[t][k-t]]+t);
    }
    cout<<dp[n]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/