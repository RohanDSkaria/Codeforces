#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b;
    int sum=0,ans=0;
    for(int &i:a){
        cin>>i;
        if(i&1) b.push_back(i);
        else sum+=i;
    }
    if(b.size()) ans+=sum;
    sort(b.rbegin(),b.rend());
    for(int i=0,j=b.size()-1; i<=j; i++,j--) ans+=b[i];
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