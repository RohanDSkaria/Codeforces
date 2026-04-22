#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<string> a(n);
    for(auto& i:a) cin>>i;
    int x=n,y=m,mx=0,my=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]=='.') continue;
            x=min(x,i);
            y=min(y,j);
            mx=max(mx,i);
            my=max(my,j);
        }
    }
    for(int i=x; i<=mx; i++){
        for(int j=y; j<=my; j++) cout<<a[i][j];
        cout<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/