#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),c(n);
    for(int &i:a) cin>>i;
    for(int &i:c) cin>>i;
    int sum=accumulate(c.begin(),c.end(),0ll);
    vector<int> dp=c;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(a[j]>a[i]) continue;
            dp[i]=max(dp[i],dp[j]+c[i]);
        }
    }
    cout<<sum-*max_element(dp.begin(),dp.end())<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/