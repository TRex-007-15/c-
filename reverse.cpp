#include<iostream>
using namespace std;

void Reverse(int n)
{
    int rev=0;
    int m=n;
    int r;
    while(m>0)
    {
        r=m%10;
        rev=rev*10+r;
        m=m/10;
    }
    cout<<rev;
}
int main()
{
    Reverse(5326);
    return 0;
}