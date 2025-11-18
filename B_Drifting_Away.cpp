#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;cin>>s;
    vector<string> a={"><","*<",">*","**"};
    for(auto i:a) if(s.find(i)!=-1){
        cout<<"-1\n";
        return;
    }
    cout<<max(count(s.begin(),s.end(),'>'),count(s.begin(),s.end(),'<'))+(s.find('*')!=-1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/