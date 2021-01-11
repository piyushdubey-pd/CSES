#include <bits/stdc++.h>
using namespace std;

int dp[102][1000002];

int minc(int n,int x, vector<int> c){
    if(n==0||x==0)
    return 0;
    if(dp[n][x]!=-1)
    return dp[n][x];

    int res=INT_MAX;
    if (c[n-1]<=x){
    return dp[n][x]=min(res,1+minc(n-1,x-c[n-1],c),minc(n-1,x,c));
    }
    else
    return dp[n][x]=min(n-1,x,c);   
}

int main(){
    memset(dp,-1,sizeof(dp));
    int n,x;
    cin>>n>>x;
    vector<int> c(n);
    for(int i=0;i<n;i++)
        cin>>c[i];
    cout<<minc(n,x,c)<<endl;
}