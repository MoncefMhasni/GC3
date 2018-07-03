#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int tc;cin>>tc;cin.ignore();
    while(tc--){
        string s;getline(cin,s);
        int ans = 0,sign = 1;
        for(auto i:s) ans+=sign*i,sign*=-1;
        cout<<ans*ans<<endl;
    }
}
