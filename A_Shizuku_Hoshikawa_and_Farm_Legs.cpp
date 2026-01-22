#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    if(n&1){
        cout<<"0\n";
        return;
    }
    int ans=0;
    for(int i=0; 2*i<=n; i++){
        if((n-2*i)%4) continue;
        ans++;
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