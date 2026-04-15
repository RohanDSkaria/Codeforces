#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    if((n+1)&n) cout<<(1<<(__lg(n)+1))-1<<'\n';
    else{
        for(int i=2; i*i<=n; i++){
            if(n%i) continue;
            cout<<n/i<<'\n';
            return;
        }
        cout<<"1\n";
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
11
01

01
10
11111111
10100001

10100001
01011110


11111111
01111111

01111111
10000000
*/