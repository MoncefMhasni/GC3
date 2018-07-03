#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    string in;
    map<int,int> v;
    v['a']=v['e']=v['i']=v['o']=v['u']=v['y']=1;
    while(getline(cin,in)){
        int space = 0,vow = 0;
        for(size_t i=0;i<in.length()-1;i++)vow+=v[in[i]],space+=(in[i]==' ' && in[i+1]!=' ');
        cout<<(vow+v[in.back()] == 2+2*space ? "NP" : "P")<<endl;
    }
}