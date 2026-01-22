#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m,k;cin>>n>>m>>k;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    set<int> b;
    for(int i=0,x; i<m; i++){
        cin>>x;
        b.insert(x);
    }
    string s;cin>>s;
    vector<pair<int,int>> mv(k);
    int l=0,r=0;
    for(int i=0,x=0; i<k; i++){
        if(s[i]=='L') x--;
        else x++;
        l=min(l,x);
        r=max(r,x);
        mv[i]={l,r};
    }
    auto fn=[&](int q){
        int st=0,e=k-1;
        while(st<=e){
            int mid=st+(e-st)/2;
            auto [x,y]=mv[mid];
            x=q+x;
            y=q+y;
            auto up=b.upper_bound(x-1);
            if(up!=b.end() && *up<=y) e=mid-1;
            else st=mid+1;
        }
        return st+1;
    };
    map<int,int> mp;
    for(int i=0; i<n; i++) mp[fn(a[i])]++;
    int ans=n;
    for(int i=0; i<k; i++){
        ans-=mp[i+1];
        cout<<ans<<" \n"[i==k-1];
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/