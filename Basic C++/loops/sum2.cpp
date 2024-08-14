//program to add only positive number

#include<iostream>
using namespace std;

int main()
{
    int n,sum=0;

    cout<<"enter the number "<<endl;

    cin>>n;

    while(n>=0)
    {
        sum +=n ;        //+= ka mtlb sum+n
        cout<<"enter the number "<<endl;
        cin>>n;
    }
    cout<<"\nThe sum is "<<sum<<endl;


    return 0;
}