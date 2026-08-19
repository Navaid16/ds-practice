#include<iostream>
using namespace std;

void SwapMaxMin(int arr[], int n){
    int maxIndex=0, minIndex=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[maxIndex])
        {
            maxIndex = i;
        }
        if(arr[i]<arr[minIndex])
        {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
        arr[maxIndex] = arr[minIndex];
        arr[minIndex] = temp;
}
int main()
{
    int n;
    cout <<"enter size of array: ";
    cin >> n;
    int arr[n];
    cout <<"enter elements in array: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    SwapMaxMin(arr,n);
    cout <<"array after swapping maximum and minimum value: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
