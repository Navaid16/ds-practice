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
    bool isSort = false;
    while(!isSort)
    {
        isSort = true;
        for(int i=1; i<n; i++)
        {
            if(arr[i]<arr[i-1]){
                isSort = false;
                swap(arr[i],arr[i-1]);
            }
        }
    }
    cout << "sorted array:";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;

}