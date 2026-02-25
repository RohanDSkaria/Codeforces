#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> f(n),a(n);
    for(int& i:f) cin>>i;
    for(int i=1; i+1<n; i++) a[i]=((f[i-1]-f[i])-(f[i]-f[i+1]))/2;
    int k=0;
    for(int i=1,c=1; i+1<n; i++,c++) k+=c*a[i];
    a[n-1]=(f[0]-k)/(n-1);
    a[0]=(f[1]-f[0])+accumulate(a.begin(),a.end(),0ll);
    for(int i:a) cout<<i<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
0    + a2 + 2*a3 + 3*a4 + (n-1)*an
a1   + 0  + a3   + 2*a4 + (n-2)*an
2*a1 + a2 + 0    + a4   + 2*a5 + (n-3)*an
sum = a1(n*(n-1)/2) + 

f(1) - f(2) = -a1 + a2 + a3 + .. = S1
f(2) - f(3) = -a1 - a2 + a3 + .. = S2

S1 - S2     =  0 + 2*a2 + 0

f2 - f1 = a1 -a2 - a3 - .. = a1 -k - an
a1 - an = (f2 - f1) + k
*/