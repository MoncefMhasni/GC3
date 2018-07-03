#include<bits/stdc++.h>
using namespace std;
#define ll long long
unordered_map<ll,ll> fact;
#define pii pair<ll,ll>
#define x first
#define y second
const ll mod = 1e9+7,MAX=3e4+1;
void gen(){
    fact[1]=1;
    for(ll i=2;i<MAX;i++)
        fact[i]=(i*fact[i-1])%mod;
}
ll gcd( ll a, ll b ) { return !b ? a : gcd( b, a%b ); }
pii egcd( ll a, ll b ) { // returns x,y | ax + by = gcd(a,b)
    if( b == 0 ) return pii( 1, 0 );
    else {
        pii d = egcd( b, a % b );
    return pii( d.y, d.x - d.y * ( a / b ) );
    }
}
ll rev( ll a) {
    ll d = gcd( a, mod );
    pii ans = egcd( a, mod );
    ll ret = ans.x/d, mul = mod/d;
    ret %= mul;
    if( ret < 0 ) ret += mul;
    return ret%mod;
}
int main(){
    ios::sync_with_stdio(false);
    gen();
    int tc;cin>>tc;
    while(tc--){
    ll N;cin>>N;
    set<ll> s;
    unordered_map<ll,ll> m;
    for(int i=0;i<N;i++){
        ll tmp;cin>>tmp;
        m[tmp]++;
    }
    ll ans = fact[N];
    for(auto i=m.begin();i!=m.end();++i)
        ans = (ans*rev(fact[i->second]))%mod;

    cout<<ans<<endl;
    }

}
