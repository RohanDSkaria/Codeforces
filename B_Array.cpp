#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    for(int i=0; i<n; i++){
        int mn=0,mx=0;
        for(int j=i+1; j<n; j++){
            mn+=a[i]<a[j];
            mx+=a[i]>a[j];
        }
        cout<<max(mn,mx)<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/