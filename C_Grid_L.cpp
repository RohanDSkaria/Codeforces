#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int p,q;cin>>p>>q;
    int k=2*(2*q+p)+1;
    for(int i=3; i*i<=k; i+=2){
        if(k%i) continue;
        cout<<(i-1)/2<<' '<<((k/i)-1)/2<<'\n';
        return;
    }
    cout<<"-1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/