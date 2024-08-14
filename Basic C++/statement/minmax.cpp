// Program to find maximum,minimum among two number

#include<iostream>
using namespace std;

int main()
{
    int a,b,min,max;

    cout<<"enter the values of a and b "<<endl;
    cin>>a>>b;

    if(a>b)
    {
        max=a;
        min=b;

        cout<<"the maximum number is "<<max<<endl;
        cout<<"the minimum number is "<<min<<endl;

    }
    else
    {
        max=b;
        min=a;

        cout<<"the maximum number is "<<max<<endl;
        cout<<"the minimum number is "<<min<<endl;
    }
    return 0;
}