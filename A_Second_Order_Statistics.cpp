#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    set<int> s;
    while(cin>>n) s.insert(n);
    if(s.size()>1) cout<<*next(s.begin())<<'\n';
    else cout<<"NO\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/