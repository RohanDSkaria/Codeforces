#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=1e6+1;
vector<int> spf(M);
bool solve(){
    int n;cin>>n;
    vector<int> a(n),b(n,1);
    for(int& i:a) cin>>i;
    bool ya=1;
    for(int i=1; i<n; i++) ya&=a[i-1]<=a[i];
    if(ya) return 0;
    for(int i=0; i<n; i++){
        if(a[i]==1) continue;
        b[i]=spf[a[i]];
        int k=0,c=a[i],l=-1;
        while(c>1){
            int t=spf[c];
            if(t!=l){
                k++;
                l=t;
            }
            c/=t;
        }
        if(k>1) return 1;
    }
    ya=1;
    for(int i=1; i<n; i++) ya&=b[i-1]<=b[i];
    return !ya;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    iota(spf.begin(),spf.end(),0ll);
    for(int i=2; i*i<=M; i++){
        if(spf[i]==i){
            for(int j=i*i; j<=M; j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
    while(t--) cout<<(solve()?"Alice\n":"Bob\n");
}
/*

*/