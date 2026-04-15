#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    const int M=15000000;
    int gg=0,ans=0;
    vector<int> a(n),m(M+1);
    map<int,int> f;
    for(int& i:a){
        cin>>i;
        gg=__gcd(gg,i);
    }
    int g=gg;
    for(int& i:a){
        i/=gg;
        f[i]++;
    }
    for(auto& [x,y]:f){
        if(x==1) continue;
        for(int i=1; i*i<=x; i++){
            if(x%i) continue;
            m[i]+=y;
            if(i*i!=x) m[x/i]+=y;
        }
    }
    for(int i=M; i>0; i--){
        if(m[i]>1){
            g=i;
            break;
        }
    }
    if(g==1){
        cout<<"-1\n";
        return;
    }
    for(int i:a) ans+=i%g!=0;
    cout<<ans<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--) solve();
}
/*

*/