#include<bits/stdc++.h>
using namespace std;
int main(){
        int tc;scanf("%d",&tc);
        while(tc--){
            double a,b,c;scanf("%lf %lf %lf",&a,&b,&c);
            double ans = sqrt(b*b+(a+c)*(a+c))/sqrt(2);
            printf("%.9f\n",ans);
        }
}
