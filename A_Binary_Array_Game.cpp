#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,a,b;cin>>n>>a;
    while(--n) cin>>b;
    return a+b;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Alice\n":"Bob\n");
}
/*

*/