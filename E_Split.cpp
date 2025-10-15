#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n),f(n+1);
    for(int &i:a){
        cin>>i;
        f[i]++;
    }
    for(int &i:f){
        if(i%k){
            cout<<"0\n";
            return;
        }
        i/=k;
    }
    vector<vector<int>> b(n+1);
    for(int i=0; i<n; i++) b[a[i]].push_back(i);
    vector<int> c(n),d(n+1);
    for(int i=0; i<n; i++) c[i]=++d[a[i]];
    int ans=0,l=0;
    for(int r=0; r<n; r++){
        int p=c[r],t=f[a[r]];
        if(p>t) l=max(l,b[a[r]][p-t-1]+1);
        ans+=r-l+1;
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