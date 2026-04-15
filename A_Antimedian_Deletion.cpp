#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    for(int i=0,x; i<n; i++) cin>>x;
    if(n==1){
        cout<<"1\n";
        return;
    }
    for(int i=0; i<n; i++) cout<<'2'<<" \n"[i==n-1];
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/