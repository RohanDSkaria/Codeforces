#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> ans;
    int k=1;
    while(k<=n){
        ans.push_back(n--);
        if(k!=n+1) ans.push_back(k++);
    }
    for(int i=ans.size()-1; i>=0; i--) cout<<ans[i]<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
          2 n-1 1 n

*/