#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    set<int> s(a.begin(),a.end());
    int ans=0;
    for(int i=0; i<n; i++){
        int k=-a[i],mx=0;
        set<int> st;
        for(int j:s) st.insert(j+k);
        for(int j:st){
            if(j<0) continue;
            if(j==mx) mx++;
            else break;
        }
        ans=max(ans,mx);
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