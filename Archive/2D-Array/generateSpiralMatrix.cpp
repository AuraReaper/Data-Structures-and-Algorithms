// given n create a nxn matrix having elements from 1 to n*n in spiral order.
#include <bits/stdc++.h>
using namespace std;

void generateMatrix(vector<vector<int> > &matrix,int n){
    int top=0;
    int bottom=matrix.size()-1;
    int left=0;
    int right=matrix[0].size()-1;
    int direction=0;
    int value=1;

    while(left<=right && top<=bottom){
        if(direction==0){ // left to right
            for(int i =left;i<=right;i++){
                matrix[top][i] = value;
                value++;
            }
            top++;
        }
        else if(direction==1){ // top to bottom
            for(int j=top;j<=bottom;j++){
                matrix[j][right] = value;
                value++;
            }
            right--;
        }
        else if(direction==2){ // right to left
            for(int k=right;k>=left;k--){
                matrix[bottom][k] = value;
                value++;
            }
            bottom--;
        }
        else{ // bottom to top
            for(int l=bottom;l>=top;l--){
                matrix[l][left] = value;
                value++;
            }
            left++;
        }
        direction=(direction+1)%4;
    }
}

int main() {
    int n;
    cout << "enter value of n: ";
    cin >> n;
    vector<vector<int> > matrix(n,vector<int>(n));
    
    generateMatrix(matrix,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << matrix[i][j] << "   ";
        }
        cout << endl;
    }
    return 0;
}