#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    vector<int> a(n);
    int sum=0;
    for(int &i:a){
        cin>>i;
        sum+=i/k;
        i%=k;
    }
    sort(a.begin(),a.end());
    for(int i=0,j=n-1; i<j; i++,j--){
        while(a[i]+a[j]<k && i<j) i++;
        sum+=i<j;
    }
    cout<<sum<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/