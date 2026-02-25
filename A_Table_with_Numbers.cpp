#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,h,l;cin>>n>>h>>l;
    if(h>l) swap(h,l);
    int r=0,c=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x<=h) r++;
        else if(x<=l) c++;
    }
    cout<<min(c,r)+max(0ll,(r-c)/2)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/