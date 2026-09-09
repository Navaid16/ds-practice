#include<iostream>
using namespace std;

int main(){
    char str[100];

    cout <<"enter a string: ";
    cin.getline(str,100);

    int size = 0;
    while(str[size] !='\0'){
        size++;
    }
    cout << "string: " << str << endl;
    cout << "size: " << size <<endl;
    return 0;
}