#include<iostream>

using namespace std;

void Factors(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
}
int main()
{
    Factors(72);
    return 0;
}