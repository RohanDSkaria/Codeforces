#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    cin>>k;
    k--;
    int l=0,r=0,ya=a[k];
    for(int i=0; i<=k; i++){
        if(a[i]==ya) continue;
        l++;
        ya^=1;
    }
    ya=a[k];
    for(int i=n-1; i>=k; i--){
        if(a[i]==ya) continue;
        r++;
        ya^=1;
    }
    cout<<max(l,r)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/