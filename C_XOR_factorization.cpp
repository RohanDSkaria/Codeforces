#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(k,n);
    for(int i=0; i<32; i++){
        int t=(n>>i)&1,c=0;
        for(int& j:a) c+=(j>>i)&1;
        if((c&1)^(t&1)){
            for(int& j:a){
                if((j>>i)&1){
                    j^=(1<<i);
                    break;
                }
            }
        }
    }
    for(int& i:a) cout<<i<<' ';
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