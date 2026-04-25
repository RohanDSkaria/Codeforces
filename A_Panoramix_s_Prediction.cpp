#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,m;cin>>n>>m;
    for(int p=n+1; p<=m; p++){
        bool ya=1;
        for(int i=2; i*i<=p; i++){
            if(p%i) continue;
            ya=0;
            break;
        }
        if(ya) return p==m;
    }
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/