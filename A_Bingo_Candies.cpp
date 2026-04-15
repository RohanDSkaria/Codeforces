#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int k=n*(n-1),ya=0;
    map<int,int> m;
    for(int i=n*n,x; i>0; i--){
        cin>>x;
        if(++m[x]>k) ya=1;
    }
    cout<<(ya?"No\n":"Yes\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/