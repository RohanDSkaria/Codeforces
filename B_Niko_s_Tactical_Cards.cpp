#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    int mn=0,mx=0;
    for(int i=0; i<n; i++){
        vector<int> t={mx-a[i],mn-a[i],b[i]-mx,b[i]-mn};
        sort(t.begin(),t.end());
        mx=t[3],mn=t[0];
    }
    cout<<mx<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/