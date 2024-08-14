// Write a program to print a given number using functions.
#include<iostream>
int print(int numb);
using namespace std;
int main()
{
  int n;
  cin>>n;

  print(n);
  return 0;

}

int print(int numb)
{
    cout<<numb<<endl;
    return 0;
    
}