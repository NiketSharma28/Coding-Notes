//sum of first n natural numbers (natural numbers 1,2,3,....)
// 1+2+3+....+n
#include<iostream>
using namespace std;
int naturalsum(int n)
{
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
  int n;
  cin>>n;

  cout<<"the sum of natural numbers till "<<n<<" is "<<naturalsum(n)<<endl;
   
return 0; 
}