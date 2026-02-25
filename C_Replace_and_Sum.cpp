#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    vector<int> a(n),b(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    a[n-1]=max(a[n-1],b[n-1]);
    for(int i=n-2; i>=0; i--) a[i]=max({a[i],a[i+1],b[i]});
    for(int i=1; i<n; i++) a[i]+=a[i-1];
    while(q--){
        int l,r;cin>>l>>r;
        l--;r--;
        int ans=a[r];
        if(l) ans-=a[l-1];
        cout<<ans<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/