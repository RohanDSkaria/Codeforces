#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int a,b,c,d;cin>>a>>b>>c>>d;
    c-=a;d-=b;
    return (min(a,b)+1)*2>=max(a,b) && (min(c,d)+1)*2>=max(c,d);
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/