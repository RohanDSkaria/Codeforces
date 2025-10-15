#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    map<int,int> m;
    for(int i=0,x; i<n; i++){
        cin>>x;
        m[x]++;
    }
    int sum=0,e=0,o=0,ya=1;
    for(auto &[x,y]:m){
        int t=y/2*2;
        y-=t;
        sum+=x*t;
        e+=t;
    }
    vector<int> a;
    for(auto &[x,y]:m) if(y) a.push_back(x);
    for(int i=a.size()-2; i>=0; i--){
        if(sum+a[i]>a[i+1]){
            sum+=a[i]+a[i+1];
            ya=0;
            o=2;
            break;
        }
    }
    if(ya){
        if(a.size() && sum>a[0]){
            o=1;
            sum+=a[0];
        }
    }
    if(e+o<3) cout<<"0\n";
    else cout<<sum<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/