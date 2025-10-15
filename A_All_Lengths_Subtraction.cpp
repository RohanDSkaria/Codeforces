#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    int s=0,e=n-1,c=1;
    while(s<e){
        if(a[s]!=c && a[e]!=c) return 0;
        a[s]==c?s++:e--;
        c++;
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