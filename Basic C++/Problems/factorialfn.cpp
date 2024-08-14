// write a program to find the factorial of two numbers and add them 
#include<iostream>
int fact(int x);
using namespace std;
int main()
{
    int n,m;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    cout<<"enter the value of m"<<endl;
    cin>>m;

    // int a=fact(n);
    // int b=fact(m);
    // int sum =a+b;
    
    int sum = fact(n)+fact(m);
    cout<<"the sum is "<<sum<<endl;

return 0; 
}

int fact(int x)
{
    int factorial = 1;
    for(int i=1;i<=x;i++)
    {
        factorial =factorial*i;       

    }

    return factorial;   
    
}

