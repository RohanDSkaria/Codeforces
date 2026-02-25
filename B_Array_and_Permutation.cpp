#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> p(n),a(n);
    for(int& i:p) cin>>i;
    for(int& i:a) cin>>i;
    int i=0,j=0;
    while(i<n){
        if(p[i]==a[j]){
            while(j+1<n && a[j]==a[j+1]) j++;
            while(i<=j) p[i++]=a[j];
            i++;
            j++;
        }
        else{
            while(i<n && p[i]!=a[j]) i++;
            if(i==n) break;
            while(j<i){
                if(a[j]!=p[i]) return 0;
                p[j]=p[i];
                j++;
            }
        }
    }
    i=n-1,j=n-1;
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"YES\n":"NO\n");
}
/*

*/