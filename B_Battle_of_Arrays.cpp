#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;cin>>n>>m;
    priority_queue<int> a,b;
    for(int i=0,x; i<n; i++){
        cin>>x;
        a.push(x);
    }
    for(int i=0,x; i<m; i++){
        cin>>x;
        b.push(x);
    }
    bool ya=1;
    while(a.size() && b.size()){
        if(a.top()>=b.top()) b.pop();
        else{
            int k=b.top();
            b.pop();
            k-=a.top();
            b.push(k);
        }
        swap(a,b);
        ya^=1;
    }
    if(!ya) swap(a,b);
    cout<<(a.size()?"Alice\n":"Bob\n");
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) solve();
}
/*

*/