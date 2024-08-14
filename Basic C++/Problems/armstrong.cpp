//Write a program to check if a number is Armstrong number
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int sum=0,N=n;
  while(n>0)
  {
    int lastdigit=n%10;
    sum= sum+pow(lastdigit,3);
    n=n/10;
 }
 if(sum==N)
 {
    cout<<"ARMSTRONG "<<endl;
 }
 else{
    cout<<"NOT ARMSTRONG "<<endl;
 }
return 0; 
}