#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,p=-1;cin>>n;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x==1) x++;
        if(p!=-1 && !(x%p)) x++;
        cout<<x<<' ';
        p=x;
    }
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