#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,m;cin>>n>>m;
    set<int> s;
    for(int i=0,x; i<n; i++){
        cin>>x;
        s.insert((x+i+1)%m);
    }
    return s.size()<m;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/