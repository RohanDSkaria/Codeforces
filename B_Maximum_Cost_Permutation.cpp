#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n+1,1);
    for(int &i:a){
        cin>>i;
        if(i) b[i]=0;
    }
    for(int i=0,j=n; i<n; i++){
        if(!a[i]){
            while(!b[j]) j--;
            a[i]=j--;
        }
    }
    int l=0,r=n-1;
    while(l<n && a[l]==l+1) l++;
    while(r>=0 && a[r]==r+1) r--;
    cout<<(l>=r?0:r-l+1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/