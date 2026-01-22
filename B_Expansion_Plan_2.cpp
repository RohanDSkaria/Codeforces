#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,x,y;cin>>n>>x>>y;
    string s;cin>>s;
    x=abs(x);y=abs(y);
    int k=count(s.begin(),s.end(),'4');
    return x<=n && y<=n && x+y<=2*n-k;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/