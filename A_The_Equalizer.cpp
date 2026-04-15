#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int sum=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        sum+=x;
    }
    cout<<((sum&1) || ((sum+(k*n)-1)&1)?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/