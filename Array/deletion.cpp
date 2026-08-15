#include<iostream>
using namespace std;
int main(){
    int n,i,arr[50];
    cout <<"enter no of element : ";
    cin >>n;
    cout<<"enter elements in array :";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int pos;
    cout <<"enter the position where to delete element:"<<endl;
    cin>>pos;
    
    for(i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    
    n--;
    cout <<"array after deletion = ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}