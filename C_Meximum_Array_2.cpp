#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k,q;cin>>n>>k>>q;
    vector<int> a(n,k);
    vector<pair<int,int>> b;
    set<int> s,t;
    while(q--){
        int c,l,r;cin>>c>>l>>r;
        if(c==1){
            for(int i=l-1; i<r; i++) s.insert(i);
        }
        else b.push_back({l-1,r-1});
    }
    for(auto &[x,y]:b){
        for(int i=x; i<=y; i++){
            if(s.count(i)) a[i]=k+1;
            else t.insert(i);
        }
    }
    int c=0;
    for(int i:t) a[i]=(c++)%k;
    for(int i:a) cout<<i<<' ';
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