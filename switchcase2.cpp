#include<iostream>

using namespace std;

void ArithOpt(int x,int y, int choice)
{
    
    switch(choice)
    {
        case 1:cout<<x+y;
        break;
        case 2:cout<<x-y;
        break;
        case 3:cout<<x*y;
        break;
        case 4:cout<<x/y;
        break;
        case 5:cout<<"exiting the menu";
        break;
    }
}
int main()
{
    int x,y,choice=0;
    cout<<"Enter the values to be operated on: ";
    cin>>x>>y;
    while(choice!=5)
    {
        cout<<endl<<"1.ADD"<<endl<<"2.SUBTRACT"<<endl<<"3.MULTIPLY"<<endl<<"4.DIVIDE"<<endl<<"5.EXIT!"<<endl;
        cin>>choice;
        ArithOpt(x,y,choice);
    }
}