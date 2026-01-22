#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    string t=s;
    sort(t.begin(),t.end());
    if(t==s){
        cout<<"Bob\n";
        return;
    }
    vector<int> a;
    int k=count(s.begin(),s.end(),'0');
    for(int i=0; i<n; i++){
        if(i<k && s[i]=='1') a.push_back(i+1);
        if(i>=k && s[i]=='0') a.push_back(i+1);
    }
    cout<<"Alice\n"<<a.size()<<'\n';
    for(int i:a) cout<<i<<' ';
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