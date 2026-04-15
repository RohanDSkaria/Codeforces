#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n),b(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    k=n-k;
    for(int i=0; i<k; i++){
        if(b[i]==-1) continue;
        if(a[i]!=b[i]) return 0;
    }
    for(int i=n-k; i<n; i++){
        if(b[i]==-1) continue;
        if(a[i]!=b[i]) return 0;
    }
    set<int> sa,sb;
    int c=0;
    for(int i=k; i<n-k; i++){
        sa.insert(a[i]);
        if(b[i]==-1) continue;
        c++;
        sb.insert(b[i]);
    }
    for(int i:sb){
        if(sa.count(i)) continue;
        return 0;
    }
    return c==sb.size();
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/