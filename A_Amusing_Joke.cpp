#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s,t;cin>>s>>t;
    s+=t;cin>>t;
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    return s==t;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/