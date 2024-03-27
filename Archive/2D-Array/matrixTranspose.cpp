// print the trnspose of a matrix using 2d array concept.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int row,col;
    cout << "enter row: ";
    cin >> row;
    cout << "enter column: ";
    cin >> col;
    int matrix[row][col];
    int transpose[col][row];

    cout << "enter matrix\n";
    for(int a=0;a<row;a++){
        for(int b=0;b<col;b++){
            cin >> matrix[a][b];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            transpose[j][i]=matrix[i][j];
        }
    }

    cout << "answer\n";
    for(int c=0;c<col;c++){
        for(int d=0;d<row;d++){
            cout<< transpose[c][d] << " ";
        }
        cout << endl;
    }
    return 0;
} 