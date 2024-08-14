//Program to check if an alphabet is vowel or a consonant

#include<iostream>
using namespace std;

int main()
{
    char c;
    int lowercase,uppercase;
    

    cout<<"enter your alphabhet "<<endl;
    cin>>c;
    
    lowercase= (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    uppercase= (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');

    if(lowercase || uppercase)
    
        cout<<c<<"it is vowel"<<endl;
    
    else
    
        cout<<c<<"it is consonent"<<endl;
    
    return 0;
}