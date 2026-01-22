#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    for(int i=1; i<n-1; i++) if(a[i]==-1) a[i]=0;
    if(a[n-1]==-1 && a[0]!=-1) a[n-1]=a[0];
    else if(a[0]==-1 && a[n-1]!=-1) a[0]=a[n-1];
    else if(a[0]==-1 && a[n-1]==-1) a[0]=a[n-1]=0;
    cout<<abs(a[n-1]-a[0])<<'\n';
    for(int i:a) cout<<i<<' ';
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