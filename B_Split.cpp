#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int> m;
    for(int i=0,x; i<2*n; i++){
        cin>>x;
        m[x]++;
    }
    int ans=0,c=0,k=0,tc=0;
    for(auto &[x,y]:m){
        if(y&1){
            ans++;
            c++;
        }
    }
    for(auto &[x,y]:m){
        if(y&1) continue;
        if((y/2)&1) ans+=2;
        else{
            if(c>0){
                ans+=2;
                c-=2;
            }
            else{
                k+=2;
                tc++;
            }
        }
    }
    if(tc&1){
        if(tc==1) k-=2;
        else k--;
    }
    cout<<ans+k<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/