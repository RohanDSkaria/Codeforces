#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    sort(a.begin(),a.end());
    auto lb=[&](int x){
        int s=0,e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            a[mid].first>=x?e=mid-1:s=mid+1;
        }
        return a[s].second;
    };
    int q;cin>>q;
    while(q--){
        int x;cin>>x;
        int l=lb(x),r=l;
        cout<<"x = "<<x<<'\n'<<"l = "<<l<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/