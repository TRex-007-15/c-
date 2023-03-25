#include<iostream>

using namespace std;

void Armstrong(int n)
{
    int sum=0,r;
    int m=n;
    while(m>0)
    {
        r=m%10;
        sum+=r*r*r;
        m=m/10;
    }
     if(sum==n)
        cout<<"armstrong";
    else
        cout<<"not armstrong";
}
int main()
{
    Armstrong(153);
    return 0;
}