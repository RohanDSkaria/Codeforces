#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    a.push_back(0);
    int l=0,c=0;
    pair<int,int> ans={0,n};
    auto fn=[&](int r){
        int cnt=0,first=-1,last=-1,cnt2=0;
        for(int i=l; i<=r; i++){
            cnt+=abs(a[i])==2;
            if(a[i]<0){
                cnt2++;
                if(first==-1) first=i;
                last=i;
            }
        }
        if(!(cnt2&1)){
            if(cnt>c){
                c=cnt;
                ans={l,n-1-r};
            }
            return;
        }
        int cntl=0,cntr=0;
        for(int i=l; i<=first; i++) cntl+=abs(a[i])==2;
        for(int i=last; i<=r; i++) cntr+=abs(a[i])==2;
        if(cntl<=cntr && cnt-cntl>c){
            c=cnt-cntl;
            ans={first+1,n-1-r};
        }
        else if(cntr<cntl && cnt-cntr>c){
            c=cnt-cntr;
            ans={l,n-1-last+1};
        }
    };
    for(int r=0; r<=n; r++){
        if(a[r]) continue;
        fn(r-1);
        l=r+1;
    }
    cout<<ans.first<<' '<<ans.second<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/