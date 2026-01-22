#include <bits/stdc++.h>
using namespace std;
#define int long long
#define v vector

template<typename T>
class segtree{
public:
    v<T> t;
    int n,h;
    T idn;
    segtree(v<T> &a,T idn):idn(idn){
        n=a.size();
        h=0;
        while((1<<h)<n) h++;
        t.assign(4*n,idn);
        for(int i=0; i<n; i++) set(i,a[i]);
    }
    T merge(T a,T b){
        return a^b;
    }
    int query(int k){
        int ans=0,c=n-1+k;
        for(int i=0; i<h; i++){
            int sb=c&1?c+1:c-1;
            bool ya=0;
            if(t[c]==t[sb] && (c&1)) ya=1;
            else if(t[c]>t[sb]) ya=1;
            if(!ya) ans+=(1<<i);
            c=(c-1)/2;
        }
        return ans;
    }
    void set(int id,T val){
        function<void(int,int,int)> f=[&](int tid,int tl,int tr){
            if(tl==tr){
                t[tid]=val;
                return;
            }
            int tm=(tl+tr)/2;
            if(id<=tm) f(2*tid+1,tl,tm);
            else f(2*tid+2,tm+1,tr);
            t[tid]=merge(t[2*tid+1],t[2*tid+2]);
        };
        f(0,0,n-1);
    }
};
void solve(){
    int n,q;cin>>n>>q;
    vector<int> a(1<<n);
    for(int& i:a) cin>>i;
    segtree<int> st(a,0);
    while(q--){
        int b,c;cin>>b>>c;
        b--;
        st.set(b,c);
        cout<<st.query(b)<<'\n';
        st.set(b,a[b]);
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