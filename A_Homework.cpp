#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n;
    string a,b,c;cin>>a>>m>>b>>c;
    for(int i=0; i<m; i++){
        if(c[i]=='V') a=b[i]+a;
        else a+=b[i];
    }
    cout<<a<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/