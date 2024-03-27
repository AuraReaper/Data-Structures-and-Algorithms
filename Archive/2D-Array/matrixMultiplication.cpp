//basic program on 2d array to multiply 2 matrix.
// it is the most important problem of 2d array.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row1,col1,row2,col2;
    cout << "enter rows of the matrix 1 and 2: ";
    cin >> row1 >> row2;
    cout << "enter columns of the matrix 1 and 2: ";
    cin >> col1 >> col2;
    int matrix1[row1][col1];
    int matrix2[row2][col2];
    int ansMatrix[row1][col2];
    if(row2 ==col1){
        cout << "Matrix multiplication possible\n";
        cout << "enter matrix 1 elements\n";
        for(int a=0;a<row1;a++){
            for(int b=0;b<col1;b++){
                cin >> matrix1[a][b];
            }
        }

        cout << "enter elemnts of matrix 2\n";
        for(int c=0;c<row2;c++){
            for(int d=0;d<col2;d++){
                cin >> matrix2[c][d];
            }
        }
        
        int ans;
        for(int i=0;i<row1;i++){
            for(int j=0;j<col2;j++){
                ans=0;
                for(int k=0;k<col1;k++){
                    ans += matrix1[i][k] * matrix2[k][j];
                }
                ansMatrix[i][j]=ans;
            }
        }

        cout << "answer\n";
        for(int l=0;l<row1;l++){
            for(int m=0;m<col2;m++){
                cout << ansMatrix[l][m] << " ";
            }
            cout << endl;
        }
    }
    else{
        cout << "Matrix multiplocation not possible";
    }

    return 0;
}