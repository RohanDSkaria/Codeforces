#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a={1,9,29,56};
    if(n<5) cout<<a[n-1]<<'\n';
    else cout<<((n*(n-1)-1)*3)+(n*n-1)+(n*(n-2)-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/