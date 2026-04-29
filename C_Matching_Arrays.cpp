#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x;cin>>n>>x;
    vector<pair<int,int>> a(n);
    vector<int> b(n),ans(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int& i:b) cin>>i;
    sort(a.rbegin(),a.rend());
    sort(b.begin(),b.end());
    if(x==n){
        for(int i=0; i<n; i++){
            if(a[i].first>b[i]) continue;
            cout<<"No\n";
            return;
        }
    }
    else if(a[x].first>b.back() || a.back().first>b[x]){
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n"; 
    for(int i=0; i<x; i++) ans[a[i].second]=b[i];
    for(int i=x; i<n; i++) ans[a[i].second]=b[n-1-i+x];
    for(int i:ans) cout<<i<<' ';
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