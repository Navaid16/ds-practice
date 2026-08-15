#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter no of elements:";
    cin >>n;
    int low=0,high=n-1,mid,arr[n];
    cout <<"enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int target;
    bool found=false;
    cout <<"enter element to search: ";
    cin >>target;
    while(low<=high)
    {
    mid = (low+high)/2;
    if(arr[mid]==target)
    {
        cout << "element found at " << mid;
        found=true;
        break;
    }
    else if(target < arr[mid])
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
 }
   if(!found)
   {
    cout <<"element not found";
   }
   return 0;
}