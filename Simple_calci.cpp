#include <iostream>
using namespace std;
int add(int n)
{
    int sum=(n*(n+1))/2;
}
int subtraction(int x,int y)
{
    int minus=x-y;
}
int product(int x,int y)
{
    int mult=x*y;
}
int division(int a,int b)
{
    int div=a/b;
}
int main()
{
    int option,num1,num2,num3,num4,num5,num6,num7;
    do
    {
        cout<<endl<<"Enter option number according to operation to perform"<<endl;
        cout<<"1.Addition"<<endl;
        cout<<"2.Subtrtaction"<<endl;
        cout<<"3.Multiplication"<<endl;
        cout<<"4.Division"<<endl;
        cin>>option;
        switch(option)
        {
            case 0:
            break;
            case 1:
            cout<<"Enter number "<<endl;
            cin>>num1;
            cout<<add(num1);
            break;
            case 2:
            cout<<"Enter two numbers: "<<endl;
            cin>>num2>>num3;
            cout<<"Subtraction of two numbers is: "<<subtraction(num2,num3);
            break;
            case 3:
            cout<<"Enter two numbers: "<<endl;
            cin>>num4>>num5;
            cout<<"Product of two numbers is: "<<product(num4,num5);
            break;
            case 4:
            cout<<"Enter two numbers: "<<endl;
            cin>>num6>>num7;
            cout<<"Division of two numbers is: "<<division(num6,num7);
            break;
        }
        
    } while (option!=0);
    return 0;
}