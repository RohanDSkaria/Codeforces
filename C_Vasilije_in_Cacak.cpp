#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,k,x;cin>>n>>k>>x;
    int mn=k*(k+1)/2,mx=(n*(n+1)/2)-((n-k)*(n-k+1)/2);
    if(x<mn || x>mx) return 0;
    vector<int> a(k);
    iota(a.begin(),a.end(),1ll);
    x-=mn;
    for(int i=k-1; i>=0 && x>0; i--){
        int t=min(x,n-k);
        a[i]+=t;
        x-=t;
    }
    for(int i:a) cout<<i<<' ';
    cout<<'\n';
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