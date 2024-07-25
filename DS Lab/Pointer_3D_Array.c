#include <stdio.h>
#include <stdlib.h>
    
int main(){
    int ***ptr = (int ***)malloc(3 * sizeof(int **)) ;
    for(int i = 0 ; i < 3 ; i++) {
        ptr[i] = (int **)malloc(2 * sizeof(int *)) ;
    }
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            ptr[i][j] = (int *)malloc(3 * sizeof(int)) ;
        }
    }

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            for(int k = 0 ; k < 3 ; k++) {
                ptr[i][j][k] = i + j + k ;
            }
        }
    }

    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            for(int k = 0 ; k < 3 ; k++) {
                printf("%d\t" , ptr[i][j][k]) ;
            }
            printf("\n") ;
        }
        printf("\n") ;
    }

    //deleting memory
    for(int i = 0 ; i < 3 ; i++) {
        for(int j = 0 ; j < 2 ; j++) {
            free(ptr[i][j]) ;
        }
    }

    for(int i = 0 ; i < 3 ; i++) {
        free(ptr[i]) ;
    }

    free(ptr) ;
    return 0;
}