#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int n=s.size(),k=0;
    for(int i=0; i<n; i++) k+=s[i]-'0';
    if(k<10){
        cout<<"0\n";
        return;
    }
    sort(s.begin()+1,s.end());
    k=1;
    int ans=1;
    for(int i=1; i<n; i++){
        if(k+(s[i]-'0')<10) k+=s[i]-'0';
        else{
            ans=n-i+(s[0]!='1');
            break;
        }
    }
    k=s[0]-'0';
    for(int i=1; i<n; i++){
        if(k+(s[i]-'0')<10) k+=s[i]-'0';
        else{
            cout<<min(ans,n-i)<<'\n';
            return;
        }
    }
    cout<<(s[0]!='1')<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/