#include<iostream>
using namespace std;
int main(){
    int n,rem,count=0;
    cout<<"enter a number:";
    cin >> n;
    while(n>0){
        rem=n%10;
        count++;
        n=n/10;
    }
    cout<<"count of digits:" << count;
    return 0;
    
}