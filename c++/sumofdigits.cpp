#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0;
    cout<<"enter a number:";
    cin >> n;
    while(n>0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    cout<<"count of digits:" << sum;
    return 0;
    
}