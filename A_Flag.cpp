#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,m;cin>>n>>m;
    string s,p;
    while(cin>>s){
        if(s!=string(m,s[0]) || s==p) return 0;
        p=s;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/