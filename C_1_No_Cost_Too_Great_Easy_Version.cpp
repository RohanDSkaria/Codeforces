#include <bits/stdc++.h>
using namespace std;
#define int long long

const int M=2e5+10;
vector<int> lpf(M,1);
bitset<M> isPrime;
void solve(){
    int n;cin>>n;
    vector<int> a(n);
    for(int &i:a) cin>>i;
    for(int i:a) cin>>i;
    set<int> s;
    bool ya=0;
    for(int i:a){
        ya|=!(i&1);
        set<int> t;
        while(i!=1){
            t.insert(lpf[i]);
            i/=lpf[i];
        }
        for(int j:t){
            if(s.count(j)){
                cout<<"0\n";
                return;
            }
            s.insert(j);
        }
    }
    if(ya){
        cout<<"1\n";
        return;
    }
    for(int i:a){
        set<int> t;
        i++;
        while(i!=1){
            t.insert(lpf[i]);
            i/=lpf[i];
        }
        for(int j:t){
            if(s.count(j)){
                cout<<"1\n";
                return;
            }
        }
    }
    cout<<"2\n";
}
int32_t main(){
    ios::sync_with_stdio(0);cin.tie(nullptr);
    int t=1;
    cin>>t;
    isPrime.set();
    for(int i=2; i<M; i++){
        if(!isPrime[i]) continue;
        for(int j=i; j<M; j+=i){
            isPrime[j]=0;
            lpf[j]=i;
        }
    }
    while(t--) solve();
}
/*

*/