#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,m;cin>>a>>b>>c>>m;
    int ab=lcm(a,b),ac=lcm(a,c),bc=lcm(b,c),abc=lcm(ab,c);
    a=m/a,b=m/b,c=m/c;
    ab=m/ab,ac=m/ac,bc=m/bc,abc=m/abc;
    cout<<(6*a-3*(ab+ac)+2*abc)<<' '<<(6*b-3*(ab+bc)+2*abc)<<' '<<(6*c-3*(ac+bc)+2*abc)<<'\n';   
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/