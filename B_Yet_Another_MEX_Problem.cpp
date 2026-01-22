#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    set<int> s;
    while(n--){
        int x;cin>>x;
        s.insert(x);
    }
    int mx=0;
    while(s.count(mx)) mx++;
    cout<<min(mx,k-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/