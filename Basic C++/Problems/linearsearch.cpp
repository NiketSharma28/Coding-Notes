/*linear search in array 
arr[5]={10,20,30,40}
key = 30
search = index (2) 
*/
#include<iostream>
using namespace std;

int ls(int arr[],int n,int key){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }

 return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;
cout<<ls(arr,n,key)<<endl;
    return 0;
}