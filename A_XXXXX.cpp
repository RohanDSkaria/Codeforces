#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int sum=accumulate(a.begin(),a.end(),0ll);
    int l=0,r=n-1;
    while(l<n && a[l]%x==0) l++;
    while(r>=0 && a[r]%x==0) r--;
    if(l==n) cout<<"-1\n";
    else if(sum%x) cout<<n<<'\n';
    else cout<<max(n-l-1,r)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/