#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,x,y;cin>>a>>b>>x>>y;
    if(b<a){
        if(a&1 && a-1==b) cout<<y<<'\n';
        else cout<<"-1\n";
        return;
    }
    int ans=0;
    while(a!=b){
        if(a&1) ans+=x;
        else ans+=min(x,y);
        a++;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/