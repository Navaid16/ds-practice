#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter no of element : ";
    cin >>n;
    int arr[n];
    cout <<"enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int count = 0;
    for (int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            count++;
        }
    }
    if(arr[n-1]>arr[0])
    {
        count++;
    }
    if(count<=1)
    {
        cout <<"array is rotated sorted";
    }
    else{
        cout <<"array is not rotated sorted";
    }
    return 0;
}