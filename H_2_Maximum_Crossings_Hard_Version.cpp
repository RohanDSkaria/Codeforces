#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Fenwick{
    int n;
    vector<int> bit;
    Fenwick(int n): n(n), bit(n+1,0) {}
    void add(int idx,int v){
        for(; idx<=n; idx+=idx&-idx) bit[idx]+=v;
    }
    int sum(int idx){
        int r=0;
        for(; idx>0; idx-=idx&-idx) r+=bit[idx];
        return r;
    }
};
void solve(){
    int n;cin>>n;
    Fenwick ft(n);
    int ans=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        ans+=ft.sum(n)-ft.sum(x-1);
        ft.add(x,1);
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
2 1 4 2 4 1
2 3 7 9 13 14
14 12 11 7 5 1
*/