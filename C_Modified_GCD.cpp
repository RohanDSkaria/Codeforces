#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,n;cin>>a>>b>>n;
    int g=__gcd(a,b);
    set<int> s;
    for(int i=1; i*i<=g; i++){
        if(g%i) continue;
        s.insert(i);
        s.insert(g/i);
    }
    while(n--){
        int l,r;cin>>l>>r;
        auto it=s.upper_bound(r);
        int ans=-1;
        if(it!=s.begin()){
            --it;
            if(l<=*it) ans=*it;
        }
        cout<<ans<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/