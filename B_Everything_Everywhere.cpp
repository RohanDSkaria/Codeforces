#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,f;cin>>n>>f;
    int ans=0;
    for(int i=1,c; i<n; i++,f=c){
        cin>>c;
        ans+=__gcd(f,c)==abs(f-c);
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