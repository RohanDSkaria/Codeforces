#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int k,x;cin>>k>>x;
    int t=1ll<<(k+1),h=t>>1;
    int a=x,b=t-x;
    vector<int> ans;
    while(a!=h){
        if(a>b){
            ans.push_back(2);
            a-=b;
            b<<=1;
        }
        else{
            ans.push_back(1);
            b-=a;
            a<<=1;
        }
    }
    int n=ans.size();
    cout<<n<<'\n';
    for(int i=n-1; i>=0; i--) cout<<ans[i]<<' ';
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
00001010110
10000000000
10000000000

11000000000
01000000000
...
00001010110

11111000000
00001000000
*/