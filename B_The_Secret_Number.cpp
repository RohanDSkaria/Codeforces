#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> ans;
    for(int i=1,k=1; i<18; i++){
        k*=10;
        if(n%(k+1)) continue;
        ans.push_back(n/(k+1));
    }
    int m=ans.size();
    cout<<m<<'\n';
    for(int i=m-1; i>=0; i--) cout<<ans[i]<<' ';
    if(m) cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/