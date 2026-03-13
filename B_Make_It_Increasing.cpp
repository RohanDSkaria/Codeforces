#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int ans=0;
    for(int i=n-2; i>=0; i--){
        if(a[i+1]==0){
            cout<<"-1\n";
            return;
        }
        while(a[i]>=a[i+1]){
            ans++;
            a[i]/=2;
        }
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