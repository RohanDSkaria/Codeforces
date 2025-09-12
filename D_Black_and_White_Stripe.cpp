#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int> a(n);
    a[0]=s[0]=='W';
    for(int i=1; i<n; i++) a[i]=a[i-1]+(s[i]=='W');
    int ans=n;
    for(int i=0; i<=n-k; i++){
        int cnt=a[i+k-1];
        if(i) cnt-=a[i-1];
        ans=min(ans,cnt);
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