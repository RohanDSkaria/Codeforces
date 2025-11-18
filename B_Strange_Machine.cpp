#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,q;cin>>n>>q;
    string s;cin>>s;
    vector<pair<int,int>> a;
    char p=s[0];
    int c=0;
    for(int i=0; i<n; i++){
        if(s[i]==p) c++;
        else{
            a.push_back({p=='B',c});
            p=s[i];
            c=1;
        }
    }
    if(c) a.push_back({p=='B',c});
    while(q--){
        int x;cin>>x;
        int ans=0;
        if(a.size()==1 && !a[0].first){
            ans=(x/n)*n;
            ans+=x%n;
            cout<<ans<<'\n';
            continue;
        }
        while(x>0){
            for(auto &[i,j]:a){
                if(i){
                    if(x>=(1<<j)){
                        ans+=j;
                        x>>=j;
                    }
                    else{
                        while(x>0){
                            x>>=1;
                            ans++;
                        }
                        break;
                    }
                }
                else{
                    if(x>=j){
                        ans+=j;
                        x-=j;
                    }
                    else{
                        while(x>0){
                            x--;
                            ans++;
                        }
                        break;
                    }
                }
            }
        }
        cout<<ans<<'\n';
    }
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/