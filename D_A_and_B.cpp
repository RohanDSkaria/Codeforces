#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    auto fn=[&](char c){
        vector<int> t;
        for(int i=0; i<n; i++){
            if(s[i]==c) t.push_back(i-t.size());
        }
        int ans=0,m=t.size();
        for(int i=0; i<m; i++) ans+=abs(t[m>>1]-t[i]);
        return ans;
    };
    cout<<min(fn('a'),fn('b'))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/