#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=2e5+10;
vector<int> lpf(M,1);
bitset<M> isPrime;
void solve(){
    int n;cin>>n;
    vector<pair<int,int>> a(n);
    for(auto &[x,y]:a) cin>>y;
    for(auto &[x,y]:a) cin>>x;
    set<int> s;
    int ans=INT_MAX,e=-1,mn=ans;
    for(int i=0; i<n; i++){
        if(!(a[i].second&1)) e=i;
        set<int> t;
        int k=a[i].second;
        while(k!=1){
            t.insert(lpf[k]);
            k/=lpf[k];
        }
        for(int j:t){
            if(s.count(j)){
                cout<<"0\n";
                return;
            }
            s.insert(j);
        }
    }
    if(e!=-1){
        for(int i=0; i<n; i++){
            if(!(a[i].second&1)) continue;
            mn=min(mn,a[i].first);
            int k=(a[e].second+a[i].second-1)/a[i].second;
            k*=a[i].second;
            ans=min(ans,(k-a[e].second)*a[e].first);
        }
        ans=min(ans,mn);
    }
    for(int i=0; i<n; i++){
        set<int> t;
        int k=a[i].second+1;
        while(k!=1){
            t.insert(lpf[k]);
            k/=lpf[k];
        }
        for(int j:t){
            if(s.count(j)) ans=min(ans,a[i].first);
        }
    }
    sort(a.begin(),a.end());
    for(int i=1; i<n; i++){
        int k=(a[0].second+a[i].second-1)/a[i].second;
        k*=a[i].second;
        ans=min(ans,(k-a[0].second+1)*a[0].first);
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    isPrime.set();
    for(int i=2; i<M; i++){
        if(!isPrime[i]) continue;
        for(int j=i; j<M; j+=i){
            isPrime[j]=0;
            lpf[j]=i;
        }
    }
    while(t--) solve();
}
/*

*/