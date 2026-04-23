#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s;
    getline(cin,s);
    while(!isalpha(s.back())) s.pop_back();
    return string("aeiouy").find(tolower(s.back()))!=-1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/