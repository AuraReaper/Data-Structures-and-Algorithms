#include <stdio.h>
#include <stdlib.h>
    
int main(){
    int **ptr = (int **)malloc(5 * sizeof(int *)) ;
    for(int i = 0 ; i < 5 ; i++) {
        ptr[i] = (int *)malloc(3 * sizeof(int)) ;
    }

    for(int i = 0 ; i < 5 ; i++) {
        for(int j=  0 ; j < 3 ; j++) {
            ptr[i][j] = i+j ;
        }
    }

    for(int i = 0 ; i < 5 ; i++) {
        for(int j = 0 ; j < 3 ; j++) {
            printf("%d " , ptr[i][j]) ;
        }
        printf("\n") ;
    }
    
    // Free the allocated memory
    for (int i = 0; i < 5; i++) {
        free(ptr[i]);
    }
    free(ptr);
    return 0;
}