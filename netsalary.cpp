#include<iostream>
using namespace std;
int main()
{
    float bassal,netsal,all,ded;
    cout<<"Enter the basic salary,deduction(%) and allowances(%): ";
    cin>>bassal>>ded>>all;
    netsal=bassal+(bassal*all*0.01)-(bassal*ded*0.01);
    cout<<"The netsalary is: "<<netsal;
} // namespace std;
