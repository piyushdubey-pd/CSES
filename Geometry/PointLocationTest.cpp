#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    double a[6];
    for(int i=0;i<6;i++)
        cin>>a[i];
    if((a[2]-a[0])!=0){
    if( (a[3]-a[1])/(a[2]-a[0])-(a[5]-a[3])/(a[4]-a[2])>0.0000001)
    cout<<"LEFT"<<endl;
    if((a[3]-a[1])/(a[2]-a[0])-(a[5]-a[3])/(a[4]-a[2])<-0.0000001)
    cout<<"RIGHT"<<endl;
    if (abs((a[3]-a[1])/(a[2]-a[0])-(a[5]-a[3])/(a[4]-a[2]))<0.0000001)
    cout<<"TOUCH"<<endl;
    }
    else
    {
        if(a[4]>a[0])
        cout<<"RIGHT"<<endl;
        else if(a[4]<a[0])
        cout<<"LEFT"<<endl;
        else
        cout<<"TOUCH"<<endl;
    }

}
}