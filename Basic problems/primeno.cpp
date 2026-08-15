#include<iostream>
using namespace std;
int main(){
    int n,i;
    bool isPrime=true;
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
    }
    if(isPrime==true)
    {
        cout <<"prime no"<<endl;
    }
    else{
        cout <<"non prime no "<<endl;
    }
    return 0;
}
