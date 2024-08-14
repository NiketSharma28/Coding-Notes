/*
binary search in array
n=5
arr[5]={10,20,30,40,50}
key = 40
s=0
e=50
mid=(s+e)/2
mid = 30
here 30<40
s=mid+1
*/
#include<iostream>
using namespace std;
int bs(int arr[],int n,int key)
{
    int s=0;
    int e=n;

    while(s<=e)
    {
        int mid=(s+e)/2;

        if(arr[mid]==key){
            return mid;
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else
        {
        
            e=mid-1;
        }

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
  cout<<bs(arr,n,key)<<endl;
return 0; 
}