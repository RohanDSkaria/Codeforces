#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    int d=INT_MAX;
    for(int i=0; i<n; i++) if(b[i]) d=min(d,a[i]-b[i]);
    if(d<0) return 0;
    if(d==INT_MAX) return 1;
    for(int i=0; i<n; i++){
        if(b[i] && a[i]-d!=b[i]) return 0;
        if(!b[i] && a[i]-d>b[i]) return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/