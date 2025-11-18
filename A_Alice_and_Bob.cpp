#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    int a=0,b=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        a+=x>k;
        b+=x<k;
    }
    cout<<(a>b?k+1:k-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/