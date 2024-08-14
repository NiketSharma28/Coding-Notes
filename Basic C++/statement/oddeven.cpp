//Program to check if a number is even or odd

#include<iostream>
using namespace std;

int main()
{
    int n;
    
    cout<<"enter the number "<<endl;
    cin>>n;

    if(n%2==0)
    {
        cout<<"it is even"<<endl;
        }
        else{
            cout<<"it is odd"<<endl;
        }


    return 0;
}