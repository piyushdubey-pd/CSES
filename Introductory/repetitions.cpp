#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    char prev='q';
    int max=1,temp=1;
    str+='q';
    for(char ch:str){
        if(prev==ch)
        {temp++;prev=ch;}
        else
        {
            prev=ch;
            if(temp>max)
            max=temp;
            temp=1;
        }
    }
 cout<<max;   
}