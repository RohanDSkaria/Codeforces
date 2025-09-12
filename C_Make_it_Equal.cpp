#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,k;cin>>n>>k;
    map<int,int> a,b;
    for(int i=0,x; i<2*n; i++){
        cin>>x;
        x%=k;
        if(i==n) swap(a,b);
        a[min(x,k-x)]++;
    }
    return a==b;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/