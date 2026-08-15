#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"enter no of rows: ";
    cin>>m;
    cout<<"enter no of columns: ";
    cin>>n;
    int mat[m][n],sum=0;
    cout<<"enter elements in matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"primary diagonal: ";
    for(i=0;i<m;i++){
        cout << mat[i][i] << " ";
    }
    cout << endl;
    cout <<"secondary diagonal: ";
    for(i=0;i<m;i++){
        cout << mat[i][n-i-1] << " ";
    }
        
    return 0;
}