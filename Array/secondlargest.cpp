#include<iostream>
using namespace std;
int main()
{
    int sz,largest = INT16_MIN , secondlargest = INT16_MIN;
    cout<<"enter size of array: ";
    cin>>sz;
    int arr[sz];
    cout <<"enter array element : ";
    for(int i=0;i<sz;i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < sz; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    
        cout << "Second largest : " << secondlargest;
    
    return 0;
}