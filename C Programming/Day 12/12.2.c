#include <stdio.h>
    
int main(){
    int a1[2][2] ;
    int a2[2][2] ;
    for(int i = 0 ; i < 2 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            scanf("%d" , &a1[i][j]) ;
        }
    }

    for(int k = 0 ; k < 2 ; k++) {
        for(int l = 0 ; l < 2 ; l++) {
            scanf("%d" , &a1[k][l]) ;
        }
    }
    printf("Sum of matrices") ;
    for(int m = 0 ; m < 2 ; m++){
        for(int n = 0 ; n < 2 ; n++){
            printf("%d" , a1[m][n] + a2[m][n]) ;
        }
    } 
    return 0;
}