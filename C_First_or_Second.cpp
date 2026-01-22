#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int f=LLONG_MIN>>2,s=0;
    for(int i=n-1; i>0; i--){
        f=max(f+abs(a[i]),s);
        s-=a[i];
    }
    cout<<max(a[0]+f,s)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/