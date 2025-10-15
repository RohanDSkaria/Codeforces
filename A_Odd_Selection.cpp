#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,x;cin>>n>>x;
    int o=0,e=0;
    for(int i=0,t; i<n; i++){
        cin>>t;
        t&1?o++:e++;
    }
    int k=min(o,x);
    return o && x-k+!(k&1)<=e;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/