#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    vector<int> a(n),b(n);
    for(int i=1; i<n-1; i++) cin>>b[i];
    for(int i=1; i<n-1; i++){
        if(b[i]){
            a[i-1]=a[i];
            a[i+1]=a[i];
        }
        else a[i+1]=a[i]+1;
    }
    for(int i=1; i<n-1; i++){
        if(b[i]){
            if(a[i]!=a[i+1] || a[i]!=a[i-1]) return 0;
        }
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*
#include <bits/stdc++.h>
using namespace std;
#define int long long

bool solve(){
    int n;cin>>n;
    string s;
    while(n--){
        int c;cin>>c;
        cout<<c<<'\n';
        // s+=c;
    }
    return 1;
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--) cout<<(solve()?"Yes\n":"No\n");
}
/*

*/