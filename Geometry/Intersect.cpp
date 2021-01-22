#include <bits/stdc++.h>
using namespace std;
using ll =long long;
struct P{
    ll x,y;
    void read(){
        cin>>x>>y;
    }
    P operator -(const P& b) const{
        return P{x-b.x,y-b.y};
    }
    ll operator *(const P& b) const{
        return ((x*b.y) -(y*b.x));
    }
    ll triangle (const P& b, const P& c) const{
        return (b-*this)*(c-*this);
    }
};

void test_case(){
    P p1,p2,p3,p4;
    p1.read(); p2.read(); p3.read(); p4.read();
    if((p2-p1)*(p4-p3)==0)
    {
        // the segments are parallel
        if(p1.triangle(p2,p3) !=0){
            cout<<"NO"<<endl;
            return;
        }
        //check for boudning boxes intersection
        for(int rep=0;rep<2;++rep){
            if(max(p1.x,p2.x)<min(p3.x,p4.x) || max(p1.y,p2.y)<min(p3.y,p4.y)){
                cout<<"NO\n";
                return;
            }
            swap(p1,p3);
            swap(p2,p4);
        }
        cout<<"YES\n";
        return;
    }
    for(int rep=0;rep<2;++rep){
        ll sign1=(p2-p1)*(p3-p1);
        ll sign2=(p2-p1)*(p4-p1);
        if((sign1<0 && sign2<0) || (sign1>0 && sign2>0)){
            cout<<"NO\n";
            return;   
        }
        swap(p1,p3);
        swap(p2,p4);
    }
    cout<<"YES\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        test_case();
    }
    return 0;
}