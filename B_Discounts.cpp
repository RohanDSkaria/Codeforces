#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n),b(k);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int ans=0;
    for(int i:b){
        int t=i-1;
        while(t-- && a.size()){
            ans+=a.back();
            a.pop_back();
        }
        if(a.size()) a.pop_back();
    }
    for(int i:a) ans+=i;
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