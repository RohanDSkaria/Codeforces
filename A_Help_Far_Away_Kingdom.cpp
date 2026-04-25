#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    int k=s.find('.');
    string in=s.substr(0,k),fa=s.substr(k+1);
    if(in.back()=='9'){
        cout<<"GOTO Vasilisa.\n";
        return;
    }
    if(fa[0]>'4') in.back()++;
    cout<<in<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/