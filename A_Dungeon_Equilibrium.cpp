#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int> m;
    for(int i=0,x; i<n; i++){
        cin>>x;
        m[x]++;
    }
    int ans=0;
    for(auto &[x,y]:m){
        if(y>=x) ans+=y-x;
        else ans+=y;
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