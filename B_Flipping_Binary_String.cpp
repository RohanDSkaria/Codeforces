#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int k=count(s.begin(),s.end(),'1');
    if(k==0){
        cout<<"0\n";
        return;
    }
    if(!(k&1)){
        cout<<k<<'\n';
        for(int i=0; i<n; i++){
            if(s[i]=='1') cout<<i+1<<' ';
        }
        cout<<'\n';
    }
    else{
        k=n-k;
        string t=s;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(k&1) t[i]=t[i]=='1'?'0':'1';
            }
            else{
                if((k-1)&1) t[i]=t[i]=='1'?'0':'1';
            }
        }
        if(count(t.begin(),t.end(),'1')){
            cout<<"-1\n";
            return;
        }
        cout<<n-k<<'\n';
        for(int i=0; i<n; i++){
            if(s[i]=='0') cout<<i+1<<' ';
        }
        cout<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
000000 000000
011111 100000
100100 100100
010011 101100
111100 111100

0000
1110
0011
1000
1111

000
101
010

000 000
100 011

100
001
111

*/