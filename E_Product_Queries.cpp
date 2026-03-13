#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=3e5+1;
vector<int> spf(M);

void solve(){
    int n;cin>>n;
    set<int> s;
    for(int i=0,x; i<n; i++){
        cin>>x;
        s.insert(x);
    }
    for(int i=1; i<=n; i++){
        if(s.count(i)){
            cout<<"1 ";
            continue;
        }
        if(i<4){
            cout<<"-1 ";
            continue;
        }
        int ans=0,t=i,k=spf[t];
        bool ya=0;
        while(t>1){
            k=spf[t];
            if(!s.count(k)){
                cout<<"-1 ";
                ya=1;
                break;
            }
            while(t%k==0){
                t/=k;
                ans++;
            }
        }
        if(ya) continue;
        cout<<ans<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int i=2; i*i<=M; i++){
        if(spf[i]) continue;
        spf[i]=i;
        for(int j=i*i; j<M; j+=i){
            if(!spf[j]) spf[j]=i;
        }
    }
    while(t--) solve();
}
/*

*/