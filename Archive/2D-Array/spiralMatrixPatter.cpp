// given a nxm matrix print all its elements in a spiral oeder.
#include <bits/stdc++.h>
using namespace std;

void spiralOrder(vector<vector<int> > &matrix){
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    int direction = 0;

    while(left<=right && top<=bottom){
        if(direction==0){ //left to right
            for(int i=left;i<=right;i++){
                cout << matrix[top][i] << " " ;
            }
            top++;
        }
        else if(direction==1){ // top to bottom.
            for(int j=top;j<=bottom;j++){
                cout << matrix[j][right]<< " ";
            }
            right--;
        }
        else if(direction==2){ // right to left.
            for(int k=right;k>=left;k--){
                cout << matrix[bottom][k]<< " ";
            }
            bottom--;
        }
        else if(direction==3){ // down to top.
            for(int l=bottom;l>=top;l--){
                cout << matrix[l][left] << " ";
            }
            left++;
        }
    direction = (direction+1)%4;  
    }
}

int main() {
    int n,m;
    cout << "enter n: ";
    cin >> n;
    cout << "enter m: ";
    cin >> m;
    vector<vector<int> > matrix(n,vector<int>(m));

    cout << "enter the elements of " << n << "X" << m << " matrix\n";
    for(int a=0;a<n;a++){
        for(int b=0;b<m;b++){
            cin >> matrix[a][b];
        }
    }

    spiralOrder(matrix);
    return 0;
}