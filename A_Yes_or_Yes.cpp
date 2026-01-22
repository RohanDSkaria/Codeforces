#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s;cin>>s;
    return count(s.begin(),s.end(),'Y')<2;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/