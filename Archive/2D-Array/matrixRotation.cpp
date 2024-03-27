// rotate a gives square matrix to 90 degree clockwise.
// patter printing method
#include <bits/stdc++.h>
using namespace std;

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
     
    cout << endl;
    cout << "here is your rotated matrix\n\n";
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            cout << matrix[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}