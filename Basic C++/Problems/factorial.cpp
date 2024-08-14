//Write a program to find the factorial of a given number.
#include<iostream>
using namespace std;
int main()
{
    int n,fact=1;
    cout<<"enter the number ";
    cin>>n;

    for(int  i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial of given number is "<<fact<<endl;

    return 0;
}