#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    if(a==b) cout<<"0\n";
    else if(max(a,b)%min(a,b)) cout<<"2\n";
    else cout<<"1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/