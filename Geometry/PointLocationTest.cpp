#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    x2-=x1;x3-=x1;
    y2-=y1;y3-=y1;
    if((x2*y3)-(x3*y2)>0)
    cout<<"LEFT"<<endl;
    else if((x2*y3)-(x3*y2)<0)
    cout<<"RIGHT"<<endl;
    else cout<<"TOUCH"<<endl;
}
}