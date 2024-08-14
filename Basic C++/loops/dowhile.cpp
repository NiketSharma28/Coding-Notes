//print numbers till 5 using for do while

#include<iostream>
using namespace std;

int main()
{ /*syntax
        
        do
        {
            statement
        }while(condition);

    */
    int i=1;
    do{
        cout<<i<<endl;
        i++;
    }while(i<=5);

    return 0;
}