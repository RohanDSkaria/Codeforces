#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s;cin>>s;
    int c=0;
    for(char ch:s) c+=ch=='4'||ch=='7';
    return c==4 || c==7;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/