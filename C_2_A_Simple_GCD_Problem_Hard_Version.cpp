#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> primes;
void solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int& i:a) cin>>i;
    for(int& i:b) cin>>i;
    int ans=0;
    for(int i=0; i<n; i++){
        int g1=i?__gcd(a[i-1],a[i]):-1;
        int g2=i<n-1?__gcd(a[i],a[i+1]):-1;
        int l=lcm(g1,g2);
        if(l>b[i]) continue;
        if(l!=a[i]){
            ans++;
            continue;
        }
        
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    primes.push_back(2);
    for(int p=3; p<100; p+=2){
        bool ya=1;
        for(int i=3; i*i<=p; i++) ya&=(p%i)>0;
        if(ya) primes.push_back(p);
    }
    while(t--) solve();
}
/*

*/