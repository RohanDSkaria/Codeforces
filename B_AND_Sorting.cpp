#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int ans=(1<<20)-1;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x!=i) ans&=x;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/