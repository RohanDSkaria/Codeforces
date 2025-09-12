#include <bits/stdc++.h>
using namespace std;
#define int long long

int po(int a, int b){if(b<0)return 0;int k=1;while(b){if(b&1)k*=a;a*=a;b>>=1;}return k;}
void solve(){
    int n;cin>>n;
    const int M=1e9+10;
    vector<pair<int,int>> coins;
    for(int x=0; ; x++){
        int cost=po(3,x+1)+x*po(3,x-1);
        if(cost<M) coins.push_back({cost,po(3,x)});
        else break;
    }
    pair<int,int> ans={N,N};
    for(int i=coins.size()-1; i>=0; i--){
        int 
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