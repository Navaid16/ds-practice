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
    int pos,value;
    cout <<"enter the position where to insert element:"<<endl;
    cin>>pos;
    cout <<"enter element to insert:"<<endl;
    cin >>value;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=value;
    n++;
    cout <<"array after insertion = ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i] << " ";
    }
    return 0;
}