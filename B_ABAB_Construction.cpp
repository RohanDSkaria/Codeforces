#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    string s;cin>>s;
    if(n&1 && s[0]=='b') return 0;
    for(int i=n&1; i<n; i+=2){
        if(s[i]==s[i+1] && s[i]!='?') return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/