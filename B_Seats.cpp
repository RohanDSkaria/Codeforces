#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    // int c=0,ans=0,ya=1;
    // int i=0;
    // while(i<n && s[i]=='1'){
    //     i++;
    //     ya=0;
    // }
    // for(; i<=n; i++){
    //     if(s[i]=='1'){
    //         ans+=i!=n;
    //         if(ya || i==n) ans+=max((i>0)?1ll:0ll,(c+1)/2-1);
    //         else ans+=(c-1)/2;
    //         ya=c=0;
    //     }
    //     else c++;
    // }
    // cout<<ans<<'\n';
    if(n<3){
        cout<<1+(s=="11")<<'\n';
        return;
    }
    for(int i=n-2; i>0; i--){
        if(s[i-1]=='0' && s[i+1]=='0') s[i]='1';
    }
    cout<<count(s.begin(),s.end(),'1')<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

01 0
001 1
0001 1
00001 1
000001 2
0000001 2
00000001 3
000000001 3

101 0
1001 0
10001 1
100001 1



0 1
1 1
00 1
01 1
10 1
11 2
*/