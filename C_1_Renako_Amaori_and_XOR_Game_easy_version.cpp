#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int &i:a) cin>>i;
    for(int &i:b) cin>>i;
    int ca=0,cb=0,c=0;
    for(int i=0; i<n; i++){
        if(i&1) cb+=a[i]^b[i];
        else ca+=a[i]^b[i];
        c+=(a[i]==b[i] && a[i]);
    }
    if(ca==cb) cout<<"Tie\n";
    else if(ca>cb) cout<<"Ajisai\n";
    else cout<<"Mai\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/