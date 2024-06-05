// print a given annary in wave form.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cout << "n: " ;
    cin >> n ;
    cout << "m: " ;
    cin >> m ;
    vector< vector< int > > matrix(n , vector< int >(m , 0)) ;
    cout << "enter elements\n" ; 
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> matrix[i][j] ;
        }
    }

    for(int i = 0 ; i < n ; i++) {
        if(i % 2 == 0) { // forward
            for(int j = 0 ; j < m ; j++) {
                cout << matrix[j][i] << " " ;
            }
        } else {
            for(int j = m - 1 ; j >= 0 ; j--) {
                cout << matrix[j][i] << " " ;
            }
        }
    }
    return 0;
}