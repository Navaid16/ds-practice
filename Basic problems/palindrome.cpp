#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,rem,temp;
    cout<<" enter a number: ";
    cin >> n;
    temp=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
    cout<<" palindrome number "<< endl;
    }
    else{
    cout<<" not a palindrome number "<< endl;
    }
    return 0;
}