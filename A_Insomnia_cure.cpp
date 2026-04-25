#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c,d,n;cin>>a>>b>>c>>d>>n;
    int one=(n/a)+(n/b)+(n/c)+(n/d);
    int ab=lcm(a,b),ac=lcm(a,c),ad=lcm(a,d),bc=lcm(b,c),bd=lcm(b,d),cd=lcm(c,d);
    int two=(n/ab)+(n/ac)+(n/ad)+(n/bc)+(n/bd)+(n/cd);
    int three=(n/lcm(a,bc))+(n/lcm(a,bd))+(n/lcm(a,cd))+(n/lcm(b,cd));
    int four=n/lcm(ab,cd);
    cout<<one-two+three-four<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/