#include<iostream>
using namespace std;
void rotatearray(int arr[], int n){
      int temp=arr[n-1];
      for(int i=n-1;i>0;i--)
      {
        arr[i]=arr[i-1];
      }
      arr[0]=temp;
}
int main()
{
    int n;
    cout <<"enter size : ";
    cin>>n;
    int arr[n];
    cout << "elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rotatearray(arr, n);
    cout << "rotated array : ";
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}