#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.begin(),a.end());
    int x;cin>>x;
    return x>=a[0] && x<=a[n-1];
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/