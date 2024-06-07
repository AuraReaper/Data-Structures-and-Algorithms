// rotate the given matrix k times in clocckwise direction
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n ;
    cout << "n: " ;
    cin >> n ;
    vector< vector<int> > matrix(n , vector<int>(n)) ;
    
    cout << "elements" << endl ;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> matrix[i][j] ;
        }
    }
     
     int k ;
     cout << "k: " ;
     cin >> k ;
     
     // rotation by 90 degrees
    if(k % 4 == 1) {

         for(int i = 0 ; i < n - 1 ; i++) {
            for(int j = i + 1 ; j < n ; j++) {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
         }

         for(int i = 0 ; i < n ; i++) {
            int start = 0 , end = n - 1 ;
            while(start <= end) {
                swap(matrix[i][start] , matrix[i][end]) ;
                start++ , end-- ;
            }
         }
    }

     // rotation by 180 degrees
    if(k % 4 == 2) {

        for(int i = 0 ; i < n ; i++) {
            int start = 0 , end = n - 1 ;
            while(start <= end) {
                swap(matrix[start][i] , matrix[end][i]) ;
                start++ , end-- ;
            }
        }

        for(int i = 0 ; i < n ; i++) {
            int start = 0 , end = n - 1 ;
            while(start <= end) {
                swap(matrix[i][start] , matrix[i][end]) ;
                start++ , end-- ;
            }
        }
    }

    // rotation by 270 degrees
    if(k % 4 == 3) {

        for(int i = 0 ; i < n - 1 ; i++) {
            for(int j _= i + 1 ; j < n ; j++) {
                swap(matrix[i][j] , matrix[j][i]) ;
            }
        }

        for(int i = 0 ; i < n ; i++) {
            int start = 0 , end = n - 1 ;
            while(start <= end) {
                swap(matrix[start][i] , matrix[end][i]) ;
                start++ , end-- ;
            }
        }
    }

    // printing the rotated matrix
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cout << matrix[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0;
}