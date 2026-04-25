#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int mx=0,c=0;
    while(n--){
        int a,b;cin>>a>>b;
        c-=a-b;
        mx=max(mx,c);
    }
    cout<<mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/