#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    int k=d-b;
    if(k<0 || c>a+k){
        cout<<"-1\n";
        return;
    }
    cout<<k+a+k-c<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/