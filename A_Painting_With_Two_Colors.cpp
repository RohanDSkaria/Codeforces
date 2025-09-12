#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,a,b;cin>>n>>a>>b;
    return ((a&1)==(b&1) && a>=b || a<=b) && (n-max(a,b)&1)==0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/