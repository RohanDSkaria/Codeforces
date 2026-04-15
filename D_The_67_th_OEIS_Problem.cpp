#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=2e5;
vector<int> primes,isp(M,1);
void solve(){
    int n;cin>>n;
    cout<<"2 ";
    for(int i=1; i<n-1; i++) cout<<primes[i]*primes[i-1]<<' ';
    cout<<primes[n-2]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    for(int i=2; i*i<M; i++){
        if(isp[i]){
            for(int j=i*i; j<M; j+=i) isp[j]=0;
        }
    }
    for(int i=2; i<M; i++) if(isp[i]) primes.push_back(i);
    while(t--) solve();
}
/*

*/