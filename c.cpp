#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;cin>>tc;
    cout.precision(4);
    while(tc--){
        double L,V,we,te,wm,tm;
        cin>>L>>V>>we>>te>>wm>>tm;
        double dt  = L/V;
        tm = tm+dt*wm-180.0;
        tm = fmod(tm,360.0);
        if(we==wm){
            if(fabs(te-tm)>1e-9)cout<<"-1\n";
            else cout<<fixed<<0<<endl;
        }
        else {
            double T = (tm-te)/(we-wm),ans =0;
            while(T<-1e-6) {
                double diff = fmod(360+te-tm,360.0);
                tm+=diff,te+=we*diff/wm,ans+=diff/wm;
                te = fmod(te,360.0);
                tm = fmod(tm,360.0);
                T = (tm-te)/(we-wm);
            }
            cout<<fixed<<ans+T<<endl;
        }
    }
}
