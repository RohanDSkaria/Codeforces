#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    for(int i=0; i<n; i++) cout<<i+1<<' '<<3*n-2*i<<' '<<3*n-2*i-1<<" \n"[i==n-1];
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/