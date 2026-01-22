#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    for(int m=1<<n,i=m; i; i>>=1){
        for(int j=i-1; j<m; j+=i<<1) cout<<j<<' ';
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