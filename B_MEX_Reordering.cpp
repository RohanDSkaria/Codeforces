#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    sort(a.begin(),a.end());
    auto mex=[&](int l, int r){
        set<int> s;
        for(int i=l; i<=r; i++) s.insert(a[i]);
        int ans=0;
        while(s.count(ans)) ans++;
        return ans;
    };
    for(int i=0; i<n-1; i++){
        if(mex(0,i)==mex(i+1,n-1)) return 0;
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