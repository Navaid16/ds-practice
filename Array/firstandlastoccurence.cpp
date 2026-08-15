#include<iostream>
using namespace std;

int firstoccurence(int arr[], int n, int key){
    int low=0, high=n-1, ans=-1;
    while(low<=high)
    {
        int mid = low +(high - low)/2;
        if(arr[mid]==key){
            ans=mid;
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}

int lastoccurence(int arr[], int n, int key){
    int low=0, high=n-1, ans=-1;
    while(low<=high)
    {
        int mid = low +(high - low)/2;
        if(arr[mid]==key){
            ans=mid;
            low=mid+1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter no of element:";
    cin>>n;
    int arr[n];
    cout<<"enter elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the element to check occurence:";
    cin>>key;

    cout<<"first occurence = " << firstoccurence(arr,n,key)<<endl;
    cout<<"last occurence = " << lastoccurence(arr,n,key)<<endl;
    return 0;
}