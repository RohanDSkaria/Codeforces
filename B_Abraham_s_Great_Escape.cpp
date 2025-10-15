#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;cin>>n>>k;
    if(n*n==k+1){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    vector<string> a(n,string(n,'.'));
    for(int i=0,c=0; c<k && i<n; i++){
        for(int j=0; c<k && j<n; j++,c++){
            a[i][j]='U';
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1; j++){
            if(a[i][j]!='.') continue;
            a[i][j]='R';
            a[i][j+1]='L';
        }
    }
    int row=0;
    while(row<n && a[row][n-1]!='.') row++;
    for(int i=row; i<n-1; i++) a[i][n-1]='D';
    if(a[n-1][n-1]=='.') a[n-1][n-1]='U';
    for(string &i:a) cout<<i<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
uuuuu
uuuud
rrrrd
ullll

uu
ul
*/