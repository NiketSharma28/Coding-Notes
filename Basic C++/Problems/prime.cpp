//Write a program to check if a number is prime or not.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
   cin>>n;
   bool flag=0;

  for(int i=2;i<sqrt(n);i++){
    
   if(n%i==0)
   {
    cout<<"NOT PRIME";
    flag =1;
    break;
   }

  }
  if(flag==0)
  {
    cout<<"PRIME";
  }


 return 0; 
}