#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int& i:a) cin>>i;
    map<int,int> m;
    for(int i:a) m[i]++;
    int mex=0;
    while(1){
        if(m[mex]){
            if(--m[mex++]==0) m.erase(mex-1);
            continue;
        }
        auto it=m.upper_bound(2*mex),jt=it;
        if(it==m.end()) break;
        for(auto j=it; j!=m.end(); j++){
            int t=j->first;
            if(j->second>1 || m.rbegin()->first>2*t){
                jt=j;
                break;
            }
        }
        if(--jt->second==0) m.erase(jt);
        mex++;
    }
    cout<<mex<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/