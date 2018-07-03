#include<bits/stdc++.h>
using namespace std;
struct point{
double x,y,z;
};
double dist(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
int main(){
    ios::sync_with_stdio(false);
    int tc;cin>>tc;
    cout.precision(3);
    while(tc--){
        int N,C;cin>>N>>C;
        vector<point> v(N);
        for(int i=0;i<N;i++)cin>>v[i].x;
        for(int i=0;i<N;i++)cin>>v[i].y;
        for(int i=0;i<N;i++)cin>>v[i].z;
        double ans = 0;
        for(int i=0;i<N;i++)
            if(i!=C-1)ans = max(ans,dist(v[i],v[C-1]));
        cout<<fixed<<ans<<endl;
    }
}
