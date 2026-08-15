#include<iostream>
using namespace std;
int main()
{
    int n,i,sum=0,avg;
    cout << "enter the no of elements of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: " << endl;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
     cout << "average of elements of array:"<<endl;
     for(i=0;i<n;i++)
     {
        sum=sum+arr[i];
     }
     avg=sum/n;
     cout << "enter elements greater than average:"<<endl;
     for(i=0;i<n;i++)
     {
        if(arr[i]>avg)
        {
            cout <<arr[i] << " ";
        }
     }
    return 0;
}