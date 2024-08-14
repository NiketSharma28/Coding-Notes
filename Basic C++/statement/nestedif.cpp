// two numbers are equal or not . If not equal so which one is greater ?

#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"enter the value of a and b "<<endl;
    cin>>a>>b;

    if(a==b)
    {
        cout<<a<<" "<<"and"<<" "<<b<<" "<<"are equal "<<endl;
        }
     else
     {
         if(a>b)
         {
            cout<<a<<" "<<"is greater than b "<<endl;
         }
         else{
            cout<<b<<" "<<"is greater than a "<<endl;
         }
        
     }   

    return 0;
}