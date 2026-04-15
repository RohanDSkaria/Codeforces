#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    map<int,string> m={
        {0,"zero"},
        {1,"one"},
        {2,"two"},
        {3,"three"},
        {4,"four"},
        {5,"five"},
        {6,"six"},
        {7,"seven"},
        {8,"eight"},
        {9,"nine"}
    };
    map<int,string> tens={
        {2,"twenty"},
        {3,"thirty"},
        {4,"forty"},
        {5,"fifty"},
        {6,"sixty"},
        {7,"seventy"},
        {8,"eighty"},
        {9,"ninety"}
    };
    map<int,string> m1={
        {10,"ten"},
        {11,"eleven"},
        {12,"twelve"},
        {13,"thirteen"},
        {14,"fourteen"},
        {15,"fifteen"},
        {16,"sixteen"},
        {17,"seventeen"},
        {18,"eighteen"},
        {19,"nineteen"}
    };
    if(n<10) cout<<m[n]<<'\n';
    else if(n<20) cout<<m1[n]<<'\n';
    else if(n%10) cout<<tens[n/10]<<'-'<<m[n%10]<<'\n';
    else cout<<tens[n/10]<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/