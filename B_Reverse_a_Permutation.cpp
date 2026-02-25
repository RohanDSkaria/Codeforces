#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int l=0;
    while(l<n && a[l]==n-l) l++;
    int r=l;
    for(int i=l+1; i<n; i++) if(a[i]>a[r]) r=i;
    while(l<r) swap(a[l++],a[r--]);
    for(int i:a) cout<<i<<' ';
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