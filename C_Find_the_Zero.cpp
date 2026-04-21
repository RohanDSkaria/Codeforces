#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    n<<=1;
    auto report=[](int k){
        cout<<"! "<<k<<endl;
    };
    auto query=[&](int i, int j){
        cout<<"? "<<i<<' '<<j<<endl;
        int a;cin>>a;
        if(a==1){
            report(i);
            return true;
        }
        return false;
    };
    for(int i=3; i<=n; i+=2) if(query(i,i+1)) return;
    if(query(1,3) || query(1,4)) return;
    report(2);
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/