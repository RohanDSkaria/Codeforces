#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    if(n==k){
        cout<<string(n,'-')<<'\n';
        return;
    }
    int z=count(s.begin(),s.end(),'0'),o=count(s.begin(),s.end(),'1'),t=k-z-o;
    for(int i=1; i<=n; i++){
        if(i<z+1 || i>n-o) cout<<'-';
        else if(i>z+t && i<=n-o-t) cout<<'+';
        else cout<<'?';
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