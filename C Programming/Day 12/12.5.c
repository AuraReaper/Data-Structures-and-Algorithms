#include <stdio.h>
    
int main(){
    int m ;
    printf("Enter size of matrix") ;
    scanf("%d" , &m) ;
    int m1[m][m] ;
    int m2[m][m] ;
    for(int i = 0 ; i < m ; i++) {
        for(int j = 0 ; j < m ; j++ ) {
            scanf("%d" , &m1[i][j]) ;
        }
    }

    for(int k = 0 ; k < m ; k++) {
        for(int l = 0 ; l < m ; l++ ) {
            scanf("%d" , &m1[k][l]) ;
        }
    }

    equal = true ;

    for(int n = 0 ; n < m ; n++) {
        for(int o = 0 ; o < m ; o++ ) {
            if(m1[n][o] != m2[n[o]]) {
                equal = false ;
            }
        }
    }
    return equal;
}