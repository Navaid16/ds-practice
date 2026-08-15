#include<iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,digit,sum;
    cout<<"enter a number:";
    cin>>n;
    sum=n;
    while(sum>9){
        n=sum;
        sum=0;
        while(n>0){
            digit=n%10;
            sum=sum+digit*digit; 
            n=n/10;
        }
    }
    if(sum==1)
    cout<<"happy number"<<sum <<endl;
    else if(sum!=1)
    cout<<"not a happy number"<< endl;
    return 0;
}