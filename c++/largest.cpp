#include<iostream>
using namespace std;
int main()
{
    int n,digit,largest=0,smallest=9;
    cout<<"enter a number:";
    cin>>n;
    while(n>0){
        digit=n%10;
        if(digit>largest)
        largest=digit;
        if(digit<smallest)
        smallest=digit;
        n=n/10;
    }
    cout<<"Largest digit :"<<largest<<endl;
    cout<<"Smallest digit :"<<smallest<<endl;
return 0;

}