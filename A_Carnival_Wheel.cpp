#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int l,a,b;cin>>l>>a>>b;
    int ans=a;
    for(int i=0; i<l; i++){
        a=(a+b)%l;
        ans=max(ans,a);
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