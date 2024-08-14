/* write a program to find combination formula.
    i.e.       nCr=n!/ ((n-r)! * (r)!)      
 */

#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial =1;
    for(int i=1;i<=n;i++)
    {
        factorial*=i;
    }
    return factorial;
}

int main()
{
  int n,r;
  cout<<"enter the value of n and r ";
  cin>>n>>r;

  int ans= fact(n)/ (fact(n-r) * fact(r)) ;
  cout<<ans;
return 0; 
}