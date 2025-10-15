#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    set<int> s;
    while(n--){
        int x;cin>>x;
        s.insert(x);
    }
    int ans=0;
    while(s.count(ans)) ans++;
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