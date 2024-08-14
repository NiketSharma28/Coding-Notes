// Write a program to add 2 numbers using functions.
#include<iostream>
int add(int numb1,int numb2);
using namespace std;
int main()
{
    int a,b;
    cout<<"enter the values of a and b ";
    cin>>a>>b;

    cout<<"the sum of a and b is "<<add(a,b)<<endl;

    return 0;
}

int add(int numb1,int numb2)
{
    int sum=numb1+numb2;
    return sum;
}