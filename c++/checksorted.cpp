#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of element : ";
    cin>>n;
    int arr[n];
    cout<<"enter elements of array: ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    bool check=true;
    for( int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        {
            check = false;
            break;
        }

    }
    if(check)
    cout<<"array is sorted.";
    else
    cout<<"array is not sorted."; 
    return 0;
}