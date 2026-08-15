#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no of element : ";
    cin>>n;
    int arr[n];
    cout<<"enter array element : ";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i] ;
    }
    int i,sum=0,product=1;
    for(i=0;i<n;i++){
            if(i%2==0)
            sum=sum+arr[i];
            else
            product=product*arr[i];
    }
    cout << "sum = " << sum <<endl;
    cout << "product = " << product <<endl;

    return 0;
}