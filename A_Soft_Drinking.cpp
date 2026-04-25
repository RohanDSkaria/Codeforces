#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k,l,c,d,p,nl,np;cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<min({k*l/nl,c*d,p/np})/n<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/