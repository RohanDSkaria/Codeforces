#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int m=1e9;
    pair<int,int> ans;
    for(int i=0; i<n; i++){
        int k=abs(a[i]-a[(n+i-1)%n]);
        if(k<m){
            m=k;
            ans={(i-1+n)%n+1,i+1};
        }
    }
    cout<<ans.first<<' '<<ans.second<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/