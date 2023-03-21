#include<iostream>
using namespace std;
int main()
{
    int x=5,y=11,z;
    cout<<"x= "<<x<<" y= "<<y<<endl;
    z=x&y;
    cout<<"x & y: "<<z<<endl;
    z=x|y;
    cout<<"x or y: "<<z<<endl;
    z=x^y;
    cout<<"x xor y: "<<z<<endl;
    z=~x;
    cout<<"NOT x: "<<z<<endl;
    z=x>>1;
    cout<<"Right shift x: "<<z<<endl;
    z=x<<1;
    cout<<"Left shift x: "<<z<<endl;
    return 0;
}