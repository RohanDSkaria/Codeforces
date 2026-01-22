#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;cin>>n;
    int cnt=0,sum=0,c=0;
    for(int i=0,x; i<n; i++){
        cin>>x;
        if(x>1){
            cnt++;
            sum+=x-1;
        }
        else if(x) c++;
    }
    cout<<cnt+min(c,sum+c-n+1)<<'\n';
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*
x
1 + sum + c - x == n
sum+c+1-n = x
1+5+1-6 = x

1 + 1 + 3
*/