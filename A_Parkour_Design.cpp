#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int x,y;cin>>x>>y;
    if(y>0) x-=2*y;
    else if(y) x+=4*y;
    return x%3==0 && x>=0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/