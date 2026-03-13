#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,x,y;cin>>n>>x>>y;
    vector<int> a(n),in,out;
    for(int& i:a) cin>>i;
    for(int i=0; i<x; i++) out.push_back(a[i]);
    for(int i=x; i<y; i++) in.push_back(a[i]);
    for(int i=y; i<n; i++) out.push_back(a[i]);
    int mn=min_element(in.begin(),in.end())-in.begin();
    if(mn!=0){
        vector<int> t;
        for(int i=mn; i<in.size(); i++) t.push_back(in[i]);
        for(int i=0; i<mn; i++) t.push_back(in[i]);
        in=t;
    }
    int k=out.size();
    for(int i=0; i<k; i++){
        if(out[i]>in[0]){
            k=i;
            break;
        }
    }
    for(int i=0; i<k; i++) cout<<out[i]<<' ';
    for(int i=0; i<in.size(); i++) cout<<in[i]<<' ';
    for(int i=k; i<out.size(); i++) cout<<out[i]<<' ';
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