#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int ans=0,a,b;
    for(int i=0; i<10; i++){
        a=4+(i<5);
        for(int j=0; j<10; j++){
            char c;cin>>c;
            if(c=='X'){
                b=4+(j<5);
                ans+=6-max(abs(i-a),abs(j-b));
            }
        }
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/