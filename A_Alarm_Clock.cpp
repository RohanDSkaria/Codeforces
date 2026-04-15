#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    if(d>=c){
        if(a>b) cout<<"-1\n";
        else cout<<b<<'\n';
        return;
    }
    a=max(0ll,a-b);
    int k=c-d,v=(a+k-1)/k;
    cout<<b+v*c<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/