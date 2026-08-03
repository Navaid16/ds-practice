#include<iostream>
using namespace std;
int main()
{
    int sz,largest = INT16_MIN;
    cout<<"enter size of array: ";
    cin>>sz;
    int arr[sz];
    cout <<"enter array element : ";
    for(int i=0;i<sz;i++)
    {
        cin >> arr[i];
    }
    for(int i=0;i<sz;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];
    }
    cout <<"largest = " << largest;
    return 0;
}