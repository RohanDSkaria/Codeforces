#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    const int inf=INT_MAX;
    int e=inf,o=inf,sum=0,ans=n-2+(n&1);
    for(int i=0; i<n; i++){
        if(i&1){
            sum-=a[i];
            if(e!=inf) ans=max(ans,2*a[i]+i-e);
            o=min(o,i-2*a[i]);
        }
        else{
            sum+=a[i];
            if(o!=inf) ans=max(ans,i-2*a[i]-o);
            e=min(e,2*a[i]+i);
        }
    }
    cout<<sum+ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
7 1 8 4

*/