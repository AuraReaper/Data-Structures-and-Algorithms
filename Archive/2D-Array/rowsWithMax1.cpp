// given a boolean 2d array where each row is sorted find the row with max 1.
#include <bits/stdc++.h>
using namespace std;

int maxRowOne(vector<vector<int> >&matrix){

    int max=0,count,maxRow;
    for(int i=0;i<matrix.size();i++){
        count=0;
        for(int j=0;j<matrix[i].size();j++){
            if(matrix[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            maxRow=i;
        }
    }
    return maxRow;
}

int main() {
    int row,col;
    cout << "enter row: ";
    cin >> row;
    cout << "enter columns: ";
    cin >> col;
    vector<vector<int> > matrix(row, vector<int>(col));

    for(int a=0;a<row;a++){
        for(int b=0;b<col;b++){
            cin >> matrix[a][b];
        }
    }
    
    int ans =maxRowOne(matrix);
    cout << "row with maximum 1 is: " << (ans + 1);
    return 0;
}