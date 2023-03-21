#include<iostream>
using namespace std;
void Leapyear(int year)
{
   if(year%4==0)
   {
      if(year%400==0)
      {
        cout<<"Leapyear"<<endl;
      }
      else if(year%100==0)
      {
        cout<<"Not a leap year"<<endl;
      }
      else
      {
        cout<<"Leapyear"<<endl;
      }
   }
   else
   {
    cout<<"Not a leap year"<<endl;
   }
}
int main()
{
    int year;
    cout<<"Enter the year to be checked: ";
    cin>>year;
    Leapyear(year);
}