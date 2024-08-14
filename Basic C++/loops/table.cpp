//Program to display multiplication table till 10
#include<iostream>
using namespace std;
int main()
{
    int j,i;
    for(i=1;i<=10;i++)
    {
        cout<<"the table of "<<i<<endl;
        for(j=1;j<=10;j++)
        {
            cout<<i<<'*'<<j<<'='<<i*j<<endl;
        }
    }



    return 0;
}