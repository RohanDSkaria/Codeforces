#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b;cin>>a>>b;
    auto fn=[&](int p, int q){
        int c=0,d=0,k=1;
        while(p-k>=0){
            p-=k;
            c++;
            k<<=2;
        }
        k=2;
        while(q-k>=0){
            q-=k;
            d++;
            k<<=2;
        }
        return 2*min(c,d)+(c>d && c!=d);
    };
    cout<<max(fn(a,b),fn(b,a))<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/