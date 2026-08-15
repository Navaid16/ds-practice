#include<iostream>
using namespace std;

void transpose(int arr[50][50], int temp[50][50], int m, int n){

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                temp[j][i] = arr[i][j];
            }
        }   
}

int main(){
    int m,n;
    cout << "enter value of m: ";
    cin >>m;
    cout << "enter value of n: ";
    cin >>n;
    int arr[50][50];
    int temp[50][50];
    cout << "array elements : ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j] ;
        }
    }
    transpose(arr,temp,m,n);
    cout <<"transpose of matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << temp[i][j] << " ";
        }
    }
    cout << endl;
    return 0;
}