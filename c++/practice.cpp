#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of elements: ";
    cin>>n;
    int i,arr[n];
    cout<<"enter elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k,temp=arr[n-1];
    cout<<"enter place from where to rotate array: ";
    cin>>k;
     for(i=n-1;i>=k;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[k]=arr[0];
    arr[i]=temp;
    n++;
    cout<<"rotated array: ";
    for(i=0;i<n-1;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}