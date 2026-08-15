#include<iostream>
using namespace std;
int main()
{
    int n,i,key;
    cout <<"enter no of elements: ";
    cin >> n;
    int arr[n];
    cout <<"enter elements of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "enter element to search: ";
    cin >> key;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
        cout <<"element found at " << i << endl;
        break;
    }
    else{
        cout <<"element not found";
    }
}
    return 0;
}