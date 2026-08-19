#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0, end = n-1;
    while(start < end)
    {
    swap(arr[start], arr[end]);
    start++;
    end--;
    }
}
int main()
{
    int n;
    cout <<"enter no of elements: ";
    cin >> n;
    int arr[n];
    cout <<"enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    reverseArray(arr,n);

    cout <<"reverse array: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;
}