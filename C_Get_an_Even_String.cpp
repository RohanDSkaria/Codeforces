#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int n=s.size();
    vector<int> ans(n);
    map<char,int> m;
    for(int i=0; i<n; i++){
        if(i) ans[i]=ans[i-1];
        if(m.count(s[i])) ans[i]=max(ans[i],1+(m[s[i]]?ans[m[s[i]]-1]:0));
        m[s[i]]=i;
    }
    cout<<n-2*ans[n-1]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/