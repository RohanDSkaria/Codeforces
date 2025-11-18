#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k,x;cin>>n>>k>>x;
    vector<int> a(n),ans;
    for(int &i:a) cin>>i;
    int s=0,e=x;
    auto cc=[&](int v){
        vector<pair<int,int>> t;
        vector<int> tans;
        for(int i:a){
            int l=max(0ll,i-v+1),r=min(x,i+v-1);
            if(l<=r) t.push_back({l,r});
        }
        sort(t.begin(),t.end());
        int tk=k,p=0;
        int m=t.size(),i=0;
        while(tk>0 && p<=x){
            while(i<m && t[i].second<p) i++;
            if(i==m || p<t[i].first){
                tans.push_back(p);
                tk--;
                p++;
            }
            else p=t[i].second+1;
        }
        if(tk) return 0;
        ans=tans;
        return 1;
    };
    while(s<=e){
        int m=s+(e-s)/2;
        cc(m)?s=m+1:e=m-1;
    }
    for(int i:ans) cout<<i<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/