#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter no of element : ";
    cin >>n;
    int arr[n];
    cout <<"enter elements in array : ";
    for(int i=0;i<n;i++)
    {
        cin >>arr[i];
    }
    int low=0, high=n-1, target;
    cout <<"enter element to search: ";
    cin >>target;
    while(low<=high)
    {
        int mid = (low+high)/2;
        if(arr[mid]==target)
        {
        cout<<"element found at index " << mid;
        return 0;
        }

        if(arr[low]<=arr[mid])
        {
            if(target <= arr[low] && target < arr[mid])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        else
        {
            if(target>arr[mid] && target <= arr[high])
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
    }
     cout << "element not found";
    return 0;
}