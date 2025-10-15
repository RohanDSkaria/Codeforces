#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    string x,s;cin>>x>>s;
    auto find=[&](){
        int N=x.size();
        for(int i=0; i<N; i++){
            if(x[i]!=s[0]) continue;
            for(int j=0,k=i; j<m; j++){
                if(s[j]!=x[k]) break;
                k++;
                if(j==m-1) return 1;
                if(k>=N) return -1;
            }
        }
        return -1;
    };
    int ans=0;
    while(find()==-1){
        ans++;
        if(ans==6) break;
        x+=x;
    }
    cout<<(ans==6?-1:ans)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/