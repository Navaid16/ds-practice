#include<iostream>
using namespace std;
int main()
{
    int n,i,arr[50],arr1[50];
    cout <<"enter no of element : ";
    cin >>n;
    cout<<"enter elements in array :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
    arr1[i]=arr[i]*arr[i]*arr[i];
    }
    cout<<"elements of array after cube: "<<endl;
    for(int i=0;i<n;i++)
    { 
        cout << arr1[i] << " " << endl;
    }
    return 0;
}
    