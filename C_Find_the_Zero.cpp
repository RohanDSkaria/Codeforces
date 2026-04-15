#include <bits/stdc++.h>
using namespace std;
#define int long long

void query(int a, int b){
    cout<<"? "<<a<<' '<<b<<endl;
}
void report(int a){
    cout<<"! "<<a<<endl;
}
void solve(){
    int n,k;cin>>n;
    n<<=1;
    for(int i=5; i<=n; i+=2){
        query(i,i+1);
        cin>>k;
        if(k==1){
            report(i);
            return;
        }
    }
    for(int i=2; i<4; i++){
        query(1,i);
        cin>>k;
        if(k==1){
            report(i);
            return;
        }
    }
    query(2,3);
    cin>>k;
    report(k==1?2:4);
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/