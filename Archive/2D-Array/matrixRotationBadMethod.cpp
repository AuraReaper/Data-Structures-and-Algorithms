//  method to rotate and pribnt a matrix by 90 degress clockwise.
// we have stored the new matrix in the current ione 
// thats the major difference between this and the other one.
/* the ideal way to create a mtrix transpose(not printing transpose) is that the seconcd loop 
runs till the first loop max value 
*/
#include <bits/stdc++.h>
using namespace std;

void rotateMatrix(vector<vector<int> > &matrix,int n){

    //transpose in a square matrix
    for(int a=0;a<n;a++){
        for(int b=0;b<a;b++){//differenmce is here because it is a square matrix and we are not creating any another matrix
            swap(matrix[a][b],matrix[b][a]);
        }
    }

    //reversing thr row from back side
    for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main() {
    int n;
    cout << "enter the value of n:";
    cin >> n;
    cout << "creating a " << n << "X" << n << " matrix ...\n";
    cout << "enter the elemnts of matrix\n";
    vector<vector<int> > matrix(n,vector<int>(n));

    for(int a=0;a<n;a++){
        for(int b=0;b<n;b++){
            cin >> matrix[a][b];
        }
    }

    rotateMatrix(matrix,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}