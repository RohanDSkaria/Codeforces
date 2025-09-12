#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int ans=0;
    for(int i=n-1; i>=0; i--){
        if(s[i]=='1') continue;
        int ya=1,k=-1;
        for(int j=0; j<i; j++){
            if(s[j]=='1'){
                if(ya) k=j;
                ya=0;
            }
        }
        if(k!=-1) s[k]='0';
        ans+=!ya;
    }
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
0000110
0000011
0000010
0000001
*/