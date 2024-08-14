//Program to check if a triangle is scalene,isosceles,or equilateral

#include<iostream>
using namespace std;

int main()
{
    cout<<"let us assume a triangle of Side A , B ,C "<<endl;
    int A,B,C;

    cout<<"enter the sides "<<endl;
    cin>>A>>B>>C;

    if(A==B && B==C)
    {
        cout<<"it is equilateral triangle "<<endl;
    }
    else if (A==B || B==C || A==C)
    {
        cout<<"it is isoscales triangle "<<endl;
    }
    else{
        cout<<"it is scalene triangle "<<endl;
    }
return 0;
}