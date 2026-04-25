#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    string s;cin>>s;
    for(char c:s) if(c!='4' && c!='7') return 0;
    int a=0,b=0;
    for(int i=0; i<n; i++){
        if(i==n/2) swap(a,b);
        a+=s[i]-'0';
    }
    return a==b;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/