#include<iostream>
using namespace std;

int main()
{
    int n;
    cout <<"enter n: ";
    cin >>n;
    int arr[n];
    cout <<"enter elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
   for(int i=1; i<n; i++)
   {
    int curr=arr[i];
    int prev=i-1;
    while(prev >= 0 && arr[prev] > curr){
        swap(arr[prev], arr[prev+1]);
        prev--;
    }
   } 
   cout << "sorted array: ";
   for(int i=0; i<n; i++){
    cout << arr[i] <<" ";
   }
   return 0;
}