//Write a program to check if a given number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number ";
    cin>>n;
    int i;

    for( i=2;i<n;i++)
    {
        if(n%i==0)
       { 
        cout<<"it is not prime";
        break;           //break se loop se totally bahar aa jate hai
       }
    
    }
    if(i==n){
    cout<<"it is prime";
    }
        return 0;
}