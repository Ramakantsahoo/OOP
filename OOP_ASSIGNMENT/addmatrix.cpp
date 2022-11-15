// Construct a 2D array fo size m*n using constructor size of the matrix is to be given by the user .Use copy constructor to create a copied object and write required
// member functions to calculate sum of two matrices and display their result.
#include<bits/stdc++.h>
using namespace std;
int c=1;
class matrix{
    int m;
    int n;
    int mat[100][100];
    public:
        matrix(){
            cout<<"Enter "<<c++<<" matrix."<<endl;
            cout<<"Enter no. of rows: ";
            cin>>m;
            cout<<"Enter no. of columns: ";
            cin>>n;
            cout<<"Enter the matrix: "<<endl;
            for (int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    cin>>mat[i][j];
                }
            }
        }
        matrix(matrix &m1,matrix &m2){
            m=m1.m;
            n=m1.n;
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
                }
            }
        }
        void display(){
            cout<<"After adding matrix is: "<<endl;
            for(int i=0;i<m;i++){
                for (int j=0;j<n;j++){
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
};
int main() {
    matrix m1,m2;
    matrix m3(m1,m2);
    m3.display();
    return 0;
}
// Terminal
// Enter 1 matrix.
// Enter no. of rows: 2
// Enter no. of columns: 3
// Enter the matrix: 
// 21 44 2
// 13 9 54
// Enter 2 matrix.
// Enter no. of rows: 2
// Enter no. of columns: 3
// Enter the matrix:
// 8 10 68
// 47 11 2
// After adding matrix is:
// 29 54 70
// 60 20 56
