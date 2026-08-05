#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter no of elements:";
    cin >>n;
    int arr[n];
    cout <<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int i, temp[n],k;
    cout <<"enter k:";
    cin >>k;
    for(int i=0;i<n;i++)
    {
        temp[(i+k)%n]=arr[i];
    }
    cout <<"rotated array:";
    for(int i=0 ;i<n; i++)
    {
    cout <<temp[i] <<" ";
    }
    return 0;
}