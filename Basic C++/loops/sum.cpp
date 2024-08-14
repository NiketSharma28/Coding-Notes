//program to find sum of natural numbers till n

#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"enter the value of n "<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
        
    }
    cout<<sum;
    return 0;
}