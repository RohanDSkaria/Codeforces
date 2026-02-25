#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,s,x;cin>>n>>s>>x;
    int sum=0;
    while(n--){
        int k;cin>>k;
        sum+=k;
    }
    cout<<((s-sum)%x || s<sum?"No\n":"Yes\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/