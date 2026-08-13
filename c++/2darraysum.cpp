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
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            sum=sum+mat[i][j];
        }
        cout << "sum" << i+1 <<" = " << sum << endl;
        sum=0;
    }
    return 0;
}