#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    vector<int> even,odd;
    for(int i:a){
        if(i&1) odd.push_back(i);
        else even.push_back(i);
    }
    if(even.size()>1){
        cout<<even[0]<<' '<<even[1]<<'\n';
        return;
    }
    if(even.size()){
        for(int i:odd){
            if(even[0]>i && !((even[0]%i)&1)){
                cout<<i<<' '<<even[0]<<'\n';
                return;
            }
        }
    }
    n=odd.size();
    for(int i=0; i<n; i++){
        for(int k=1; k*odd[i]<=odd.back(); k+=2){
            int s=k*odd[i],e=(k+1)*odd[i]-1;
            auto it=lower_bound(odd.begin(),odd.end(),s);
            if(it!=odd.end() && *it<=e && *it!=odd[i]){
                cout<<odd[i]<<' '<<*it<<'\n';
                return;
            }
        }
    }
    cout<<"-1\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/