#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int p=-1,q,ya=1;
    for(int i=0; i<n && ya; i++){
        vector<int> t=a[i];
        sort(t.begin(),t.end());
        for(int j=0; j<m && ya; j++){
            if(a[i][j]!=t[j]){
                if(p==-1) p=j;
                else ya=0,q=j;
            }
        }
    }
    if(ya){
        cout<<"1 1\n";
        return;
    }
    for(int i=0; i<n; i++){
        swap(a[i][p],a[i][q]);
        for(int j=1; j<m; j++){
            if(a[i][j]<a[i][j-1]){
                cout<<"-1\n";
                return;
            }
        }
    }
    cout<<p+1<<' '<<q+1<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/