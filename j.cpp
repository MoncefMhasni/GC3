#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int mod = 1e9+7;
int main(){
    int n,m,k;
    while(cin>>n>>m>>k){
    ll grid[101][101] ,dp[101][101];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++){
            cin>>grid[i][j];
            dp[i][j]=1;
        }
    for(int j=1;j<m;j++)dp[0][j] = (grid[0][j] > k ? 0 : dp[0][j-1]);
    for(int j=1;j<n;j++)dp[j][0] = (grid[j][0] > k ? 0 : dp[j-1][0]);
    for(int i = 1; i<n;i++)
        for(int j = 1; j<m;j++){
            dp[i][j] = dp[i-1][j]+dp[i][j-1];
            dp[i][j]%=mod;
            if(grid[i][j]>k)dp[i][j]=0;
        }
    cout<<dp[n-1][m-1]<<endl;
    }
}
