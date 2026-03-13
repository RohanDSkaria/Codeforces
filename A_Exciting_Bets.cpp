#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    int g=abs(a-b);
    if(g==0){
        cout<<"0 0\n";
        return;
    }
    int k=a%g;
    cout<<g<<' '<<min(k,g-k)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/