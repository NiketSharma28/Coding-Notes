#include<iostream>
using namespace std;
int LinearSearch(int arr[],int n,int key);
int BinarySearch(int arr[],int n,int key);
int main()
{
    int  n;
    cout<<"enter the size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the element of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the key "<<endl;
    cin>>key;
    cout<<"By Linear Searching "<<LinearSearch(arr,n,key)<<endl;

//Sorting
cout<<"Firstly we will sort using bubble sort "<<endl;
int counter=1;
  while(counter<n-1)
  {
    for(int i=0;i<n-counter;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
  }
   for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;

    cout<<"By Binary Search "<<BinarySearch(arr,n,key)<<endl;
    return 0;
}
//linear search
int LinearSearch(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return i;
    }
    return -1;
}
//binary search
int BinarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if (arr[mid]<key)
        {
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
return -1;
}