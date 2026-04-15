#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    int c=count(a.begin(),a.end(),1);
    if(c){
        cout<<n-c<<'\n';
        return;
    }
    int ans=1e9;
    for(int i=0; i<n; i++){
        int g=a[i];
        for(int j=i+1; j<n; j++){
            g=__gcd(g,a[j]);
            if(g==1){
                ans=min(ans,n-1+j-i);
                break;
            }
        }
    }
    cout<<(ans==1e9?-1:ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/