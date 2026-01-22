#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    vector<pair<int,int>> b(n);
    for(int i=0; i<n; i++) b[i]={a[i],i&1};
    sort(b.begin(),b.end());
    bool ya=1;
    for(int i=1; i<n; i++){
        if(b[i].second==b[i-1].second){
            ya=0;
            break;
        }
    }
    if(ya){
        cout<<"Yes\n";
        return;
    }
    for(int i=0; i<n; i++) b[i]={a[i],(i+1)&1};
    sort(b.begin(),b.end());
    ya=1;
    for(int i=1; i<n; i++){
        if(b[i].second==b[i-1].second){
            ya=0;
            break;
        }
    }
    cout<<(ya?"Yes\n":"No\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/