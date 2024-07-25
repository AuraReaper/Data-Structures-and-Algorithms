#include <stdio.h>
#include <stdlib.h>
    
int main(){
    int ****ptr = (int ****)malloc(4 * sizeof(int ***)) ;

    for(int i = 0 ; i < 4 ; i++) {
        ptr[i] = (int***)malloc(4 * sizeof(int **)) ;
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            ptr[i][j] = (int **)malloc(4 * sizeof(int *)) ;
        }
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            for(int k = 0 ; k < 4 ; k++) {
                ptr[i][j][k] = (int *)malloc(4 * sizeof(int)) ;
            }
        }
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            for(int k = 0 ; k < 4 ; k++) {
                for(int l = 0 ; l < 4 ; l++) {
                    ptr[i][j][k][l] = i + j + k + l ;
                }
            }
        }
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            for(int k = 0 ; k < 4 ; k++) {
                for(int l = 0 ; l < 4 ; l++) {
                    printf("%d\t" , ptr[i][j][k][l]) ;
                }
                printf("\t") ;
            }
            printf("\t") ;
        }
        printf("\t") ;
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            for(int k = 0 ; k < 4 ; k++) {
                free(ptr[i][j][k])  ;
            }
        }
    }

    for(int i = 0 ; i < 4 ; i++) {
        for(int j = 0 ; j < 4 ; j++) {
            free(ptr[i][j]) ;
        }
    }

    for(int i = 0 ; i < 4 ; i++) {
        free(ptr[i]) ;
    }

    free(ptr) ;
    return 0;
}