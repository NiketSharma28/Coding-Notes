/*write a program to check if a number is prime or not. */
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int n;
  cout<<"enter any number ";
  cin>>n;
  bool flag=0;

  for(int i=2;i<=sqrt(n);i++)
  {
    if(n%i==0)
    {
        cout<<"NON-PRIME "<<endl;
        flag=1;
        break;
    }
  }
  if(flag==0)
  {
    cout<<"PRIME"<<endl;
  }

return 0; 
}