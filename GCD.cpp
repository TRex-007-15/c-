#include<iostream>
using namespace std;
void GCD(int m,int n)
{
    while(m!=n)
    {
        if(m>n)
            m=m-n;
        else if(n>m)
            n=n-m;
    }
    cout<<"GCD is "<<m;
}
int main()
{
    GCD(14,21);
    return 0;
}