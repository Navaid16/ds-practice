#include<iostream>
using namespace std;
int main()
{
    int n,i,temp;
    cout <<"enter no of element : ";
    cin >>n;
    int arr[n];
    cout<<"enter elements in array :";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    i=0;
    while(i<n-1)
        {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            i=i+2;
        }
        
    
    cout<<"array after swapping : "<<endl;
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}
    