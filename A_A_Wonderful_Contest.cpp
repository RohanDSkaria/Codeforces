#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    set<int> s{0};
    for(int i=0; i<n; i++){
        int t=100/a[i];
        set<int> ss;
        for(int k:s){
            for(int j=0; j<=a[i]; j++) ss.insert(k+j*t);
        }
        s=ss;
    }
    for(int i=100*n; i>=0; i--){
        if(s.count(i)) continue;
        return 0;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/