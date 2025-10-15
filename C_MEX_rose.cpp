#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    map<int,int> m;
    for(int i=0,x; i<n; i++){
        cin>>x;
        m[x]++;
    }
    int ans=0;
    for(int i=0; i<k; i++){
        if(m.count(i)) continue;
        ans++;
        m[k]--;
    }
    cout<<ans+max(0ll,m[k])<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/