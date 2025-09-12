#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int k=n-1+(n&1);
    for(int i=1; i<=k; i++) cout<<(i&1?-1:3)<<' ';
    cout<<(n&1?"\n":"2\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/