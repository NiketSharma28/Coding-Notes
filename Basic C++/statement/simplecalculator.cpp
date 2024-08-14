//write a program for simple calculator using switch case..

#include<iostream>
using namespace std;

int main()
{
    float numb1,numb2;
    cout<<"enter two numbers: ";
    cin>>numb1>>numb2;

    
    cout<<"press 1 for addition "<<endl;
    cout<<"press 2 for substraction "<<endl;
    cout<<"press 3 for multiplication "<<endl;
    cout<<"press 4 for division "<<endl;

    int ch,n;

    cout<<"enter your choice: "<<endl;
    cin>>ch;

    switch(ch)
    {
        case 1:
        n=numb1+numb2;
        cout<<"your addition is "<<n<<endl;
       break;

        case 2:
        n=numb1-numb2;
        cout<<"the substraction is "<<n<<endl;
        break;

        case 3:
        n=numb1*numb2;
        cout<<"the multipication is "<<n<<endl;
        break;

        case 4:
        n=numb1/numb2;
        cout<<"the division is "<<n<<endl;
        break;

        default:
        cout<<"itto si nahi aaye bhiyya ";
        break;

    }


    return 0;
}
