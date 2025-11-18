#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    int ans=0,p=0,m=0;
    for(int i=1; i<=n; i++){
        m=min(m,i*(i-1)-p);
        p+=a[i-1];
        ans=max(ans,(i*(i+1)-p)-m);
    }
    cout<<ans+p<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/