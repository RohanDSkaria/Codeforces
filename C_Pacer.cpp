#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    int ans=0,p=0,q=0;
    while(n--){
        int x,y;cin>>x>>y;
        int k=x-p;
        if(q^y) ans+=k-!(k&1);
        else ans+=k-(k&1);
        p=x,q=y;
    }
    cout<<ans+(m-p)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/