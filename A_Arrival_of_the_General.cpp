#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int mxv=-1,mnv=1e9,mx,mn;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x>mxv) mxv=x,mx=i;
        if(x<=mnv) mnv=x,mn=i;
    }
    cout<<mx+n-1-mn-(mx>mn)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/