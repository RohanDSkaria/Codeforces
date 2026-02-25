#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int ans=0;
    for(int k=1; k*k<n; k++){
        for(int x=0; x<n; x++){
            int i=x-k*a[x],j=k*a[x]+x;
            if((i>=0 && i<n && x>i && a[i]==k) || (j>=0 && j<n && x<j && a[j]==k)) ans++;
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/