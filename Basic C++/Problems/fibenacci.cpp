// Fibenacci squence 0 1 1 2 3 5 ...
#include<iostream>
void fib(int n);
using namespace std;
int main()
{
  int n;
  cout<<"enter the range ";
  cin>>n;

  fib(n);

return 0; 
}

void fib(int n)
{
    int t1 =0;
    int t2 =1;

    int nexterm;

    for(int i=1;i<=n;i++)
    {
        cout<<t1<<endl;
        nexterm =t1+t2;
        t1=t2;
        t2=nexterm;
    }
    return;
}