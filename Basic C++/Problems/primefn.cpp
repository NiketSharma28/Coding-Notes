// Write a program to print all prime numbers between 2 given numbers 
#include<iostream>
#include<math.h>
bool isprime(int x);
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the first value "<<endl;
    cin>>a;
    cout<<"Enter the second value "<<endl;
    cin>>b;

    for(int i=a;i<=b;i++)
    {
        if(isprime(i))
        {
            cout<<i<<endl;
        }
    }


    return 0;
}

bool isprime(int x)
{
    for(int i=2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}