#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    string s,t;cin>>s>>t;
    vector<int> a(26),b=a;
    for(char c:s) a[c-'A']++;
    for(char c:t) b[c-'A']++;
    int n=s.size(),m=t.size();
    for(int i=0; i<n; i++){
        int t=s[i]-'A';
        if(a[t]<b[t]) return 0;
        if(a[t]>b[t]){
            a[t]--;
            s[i]='?';
        }
    }
    reverse(t.begin(),t.end());
    for(int i=0; i<n; i++){
        if(s[i]=='?') continue;
        if(s[i]!=t.back()) return 0;
        t.pop_back();
    }
    return t.size()==0;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/