#include<iostream>
using namespace std;

void SumOfN(int n)
{
    int sum=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        sum+=i;
    }
    cout<<sum;
}
int main()
{
    SumOfN(10);
}