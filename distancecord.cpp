#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int x0,y0,x1,y1;
    cout<<"Enter the coordinates of first point"<<endl;;
    cin>>x0>>y0;
    cout<<"Enter the coordinates of second point"<<endl;
    cin>>x1>>y1;
    float dist;
    dist=sqrt(pow((x1-x0),2)+pow((y1-y0),2));
    cout<<"The distance between points is "<<dist;
}