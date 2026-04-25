#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s,t="aeiou";
    vector<int> ans;
    while(getline(cin,s)){
        int c=0;
        for(char ch:s) c+=t.find(ch)!=-1;
        ans.push_back(c);
    }
    return ans==vector<int>{5,7,5};
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/