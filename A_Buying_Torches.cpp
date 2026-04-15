#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int x,y,k;cin>>x>>y>>k;
    x--;
    int t=(k*y+k-1+x-1)/x;
    cout<<t+k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/