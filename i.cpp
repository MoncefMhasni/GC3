#include<bits/stdc++.h>
#define inf 1<<22
using namespace std;
int main(){

        int n,m,q;
        scanf("%d%d%d",&n,&m,&q);
        unordered_map<int,unordered_map<int,int>> g;
        while(m--){
            int u,v;cin>>u>>v;
            g[u-1][v-1]=1;
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
            if(g[i][j]==0)g[i][j]=inf;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                for(int k=0;k<n;k++)
                    g[j][k] = min(g[j][i]+g[i][k],g[j][k]);
        while(q--){
            int u,v;   scanf("%d%d",&u,&v);

            printf("%s\n",(g[u-1][v-1] <inf/2 ? "YES":"NO"));
        }
}
