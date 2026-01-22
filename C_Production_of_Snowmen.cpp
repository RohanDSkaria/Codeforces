#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    for(int& i:c) cin>>i;
    auto fn=[&](vector<int>& f, vector<int>& s){
        int ans=0;
        for(int j=0; j<n; j++){
            bool ya=1;
            for(int i=0; i<n; i++) ya&=f[i]<s[(j+i)%n];
            ans+=ya;
        }
        return ans;
    };
    cout<<n*fn(a,b)*fn(b,c)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/