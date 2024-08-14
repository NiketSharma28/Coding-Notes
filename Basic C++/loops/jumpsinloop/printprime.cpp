//Write a program to print all prime in a given range
#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cout<<"enter two numbers";
   cin>>a>>b;

   int n,i;
   for(n=a;n<=b;n++)
   {
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {                             //non prime condition
            break;
        }

    }
    if(i==n)
    {
        cout<<n<<endl;
    }
   }

    return 0;
}