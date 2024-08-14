/*pascal triangle
1
1 1
1 2 1 
1 3 3 1
1 4 6 4 1 

logic tij = iCj

1C1
2C1 2C2
3C1 3C2 3C3
4C1 4C2 4C3 4C4
....

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
    int n;                  
    cout<<"enter any number ";
    cin>>n;

    for(int i=0;i<n;i++)
    {                                        /*nCr = n! / ((n-r)! * r!)*/
        for(int j=0;j<i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}