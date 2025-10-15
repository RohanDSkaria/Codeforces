#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    set<int> s;
    for(int i=0,x; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/