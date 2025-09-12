#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    sort(a.begin(),a.end());
    for(int i=1; i<n; i++) if(a[i]==a[i-1]) return 1;
    return 0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/