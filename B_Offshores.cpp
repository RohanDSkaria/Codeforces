#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int> a(n);
    int t=0,ans=0;
    for(int& i:a){
        cin>>i;
        t+=(i/x)*y;
    }
    for(int i:a) ans=max(ans,t-((i/x)*y)+i);
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