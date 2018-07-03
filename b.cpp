#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    while(tc--){
        int a,b;
        scanf("%d / %d",&a,&b);
        cerr<<a<<" "<<b<<endl;
        int d = gcd(a,b);
        a/=d,b/=d;
        if(b==1)cout<<a<<endl;
        else cout<<a<<" / "<<b<<endl;
    }
}
