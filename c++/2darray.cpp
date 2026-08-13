#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    cout<<"enter no of rows: ";
    cin>>m;
    cout<<"enter no of columns: ";
    cin>>n;
    int mat[m][n];
    cout<<"enter elements in matrix: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }
    cout<<"matrix = {";
    for(i=0;i<m;i++){
        cout <<"{";
        for(j=0;j<n;j++){
            cout<<mat[i][j] << ",";
        }
        cout <<"},";
    }
    cout <<"}";
    return 0;
}