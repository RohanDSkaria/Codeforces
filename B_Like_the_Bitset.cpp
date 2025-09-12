#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int c=0,ya=0,t=n;
    for(char ch:s){
        if(ch=='1') c++;
        else ya|=c>=k,c=0;
    }
    if(ya || c>=k){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        if(s[i]=='0') continue;
        if(i>0 && s[i-1]=='0' && !ans[i-1]) ans[i-1]=t--;
        if(i<n-1 && s[i+1]=='0' && !ans[i+1]) ans[i+1]=t--;
    }
    for(int &i:ans){
        if(!i) i=t--;
        cout<<i<<' ';
    }
    cout<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/