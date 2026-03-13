#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    string s,t;cin>>s;
    for(char c:s){
        if(t.size() && c==t.back()) t.pop_back();
        else t+=c;
    }
    return t.size()==0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/