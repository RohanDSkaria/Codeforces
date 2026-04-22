#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    vector<string> a(3);
    for(auto& i:a) cin>>i;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(a[i][j]!=a[2-i][2-j]) return 0;
        }
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/