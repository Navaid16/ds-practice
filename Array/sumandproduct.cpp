#include<iostream>
using namespace std;

int Sum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    
    return sum;
}

int Product(int arr[], int n){
    int product=1;
    for(int i=0; i<n; i++)
    {
        product = product*arr[i];
    }
    return product;
}

int main()
{
    int n;
    cout <<"enter size of array: ";
    cin >> n;
    int arr[n];
    cout <<"enter array elements: ";
    for(int i=0; i<n; i++)
    {
        cin >>arr[i];
    }

  cout << Sum(arr,n)<< endl;
  cout << Product(arr,n) << endl;
   
    return 0;
}