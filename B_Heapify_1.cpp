#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    for(int i=1; i<=n; i+=2){
        vector<int> t;
        for(int j=i; j<=n; j*=2) t.push_back(a[j-1]);
        sort(t.rbegin(),t.rend());
        for(int j=i; j<=n; j*=2){
            a[j-1]=t.back();
            t.pop_back();
        }
    }
    for(int i=1; i<n; i++){
        if(a[i-1]>a[i]) return 0;
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