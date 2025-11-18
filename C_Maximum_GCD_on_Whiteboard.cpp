#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.begin(),a.end());
    if(n<=k+1){
        cout<<a[n-1]<<'\n';
        return;
    }
    
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/