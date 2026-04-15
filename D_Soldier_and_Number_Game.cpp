#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=5e6+1;
vector<int> spf(M),pre(M);
void solve(){
    int a,b;cin>>a>>b;
    cout<<pre[a]-pre[b]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int i=2; i<M; i++){
        if(spf[i]) continue;
        for(int j=i; j<M; j+=i){
            if(spf[j]) continue;
            spf[j]=i;
        }
    }
    for(int i=1; i<M; i++){
        int c=0,t=i;
        while(t>1){
            t/=spf[t];
            c++;
        }
        pre[i]=pre[i-1]+c;
    }
    while(t--) solve();
}
/*

*/