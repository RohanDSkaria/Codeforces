#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s;cin>>s;
    int n=s.size(),c=0;
    for(int i=1; i<n; i++) c+=s[i]==s[i-1];
    return c<3;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/