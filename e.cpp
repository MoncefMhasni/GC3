#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    int N,K;
    while(cin>>N>>K){
    set<int> s;
    while(N--){
        int tmp;cin>>tmp;s.insert(tmp);
    }
    cout<<*next(s.begin(),K-1)<<endl;
    }
}
