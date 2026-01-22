#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    if(n&1){
        cout<<n<<' ';
        for(int i=1; i<n; i++) cout<<i<<" \n"[i==n-1];
    }
    else cout<<"-1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/