//write a program to print all odd number till n

#include<iostream>
using namespace std;

int main()
{ 
    int i,n;
    cout<<"enter the number ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
           continue;
        }
          cout<<i<<endl;
        
    }


    return 0;
}