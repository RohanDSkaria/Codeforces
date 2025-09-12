#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    for(int i=0; i<n-1; i++){
        if(a[i]==b[i] || (a[i]^a[i+1])==b[i] || (a[i]^b[i+1])==b[i]) continue;
        return 0;
    }
    return a[n-1]==b[n-1];
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/