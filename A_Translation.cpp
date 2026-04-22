#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s,t;cin>>s>>t;
    return s==string(t.rbegin(),t.rend());
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/