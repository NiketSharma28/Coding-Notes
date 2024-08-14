// eligible for vote or not

#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<"enter your age "<<endl;
    cin>>age;

    if(age>=18)
    {
        cout<<"you can vote "<<endl;
    }
    else{
         cout<<"you are not eligible";
    }

    return 0;
}