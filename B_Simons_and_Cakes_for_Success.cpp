#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int k=1;
    for(int i=2; i*i<=n; i++){
        if(n%i) continue;
        k*=i;
        while(n%i==0) n/=i;
    }
    if(n>1) k*=n;
    cout<<k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/