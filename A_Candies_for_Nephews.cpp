#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int k=n%3;
    if(k==1) cout<<"2\n";
    else if(k==2) cout<<"1\n";
    else cout<<"0\n"; 
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/