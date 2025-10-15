#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> b(n),a(n,1);
    for(int &i:b) cin>>i;
    int k=1,t=1;
    for(int i=1; i<n; i++){
        t+=i+1;
        a[i]=k;
        if(b[i]-b[i-1])
    }
    for(int i:a) cout<<i<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1 2 3 7
1 1 1 1

1 3 5
2 3 2
1 3 6 10 15 21
*/