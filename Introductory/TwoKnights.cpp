#include<bits/stdc++.h>
using ll=long long;
using namespace std;

int main(){
int n;
cin>>n;
for(ll i=1;i<=n;i++) 
cout<<((i<3)?(i==1)?0:6:(((i*i*(i*i-1))/2)-4*(i-1)*(i-2)))<<endl;
}