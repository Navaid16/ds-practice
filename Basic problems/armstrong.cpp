#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,rem,temp;
    cout<<" enter a number: ";
    cin >> n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum){
    cout<<" armstrong number "<< endl;
    }
    else{
    cout<<" not a armstrong number "<< endl;
    }
    return 0;
}
