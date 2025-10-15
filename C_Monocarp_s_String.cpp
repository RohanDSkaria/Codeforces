#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int a=count(s.begin(),s.end(),'a'),b=n-a;
    if(a==b){
        cout<<"0\n";
        return;
    }
    int ans=n,t=a-b;
    map<int,int> m;
    m[0]=0;
    for(int i=0,c=0; i<n; i++){
        s[i]=='a'?c++:c--;
        if(m.count(c-t)) ans=min(ans,i-m[c-t]+1);
        m[c]=i+1;
    }
    cout<<(ans==n?-1:ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/