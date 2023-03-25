#include<iostream>

using namespace std;

void Factorial(int n)
{
    int fact=1;
    
    while(n>0)
    {
        fact=fact*(n);
        n--;
    }
    
    cout<<fact;
}
int main()
{
    Factorial(5);
    return 0;
}