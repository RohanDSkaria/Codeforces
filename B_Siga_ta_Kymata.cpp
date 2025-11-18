#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    string s;cin>>s;
    for(int i=0; i<n; i++){
        if(s[i]=='1' && (i==0 || i==n-1 || a[i]==1 || a[i]==n)){
            cout<<"-1\n";
            return;
        }
    }
    map<int,int> m;
    for(int i=0; i<n; i++) m[a[i]]=i+1;
    cout<<"5\n1 "<<m[1]<<"\n1 "<<m[n]<<'\n'<<m[n]<<' '<<n<<'\n'<<m[1]<<' '<<n<<'\n'<<min(m[1],m[n])<<' '<<max(m[1],m[n])<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
1  o       m        n
o m
o n
m n
1 o
1 m


1     m       o      n
m o
o n
m n
1 m
1 o
*/