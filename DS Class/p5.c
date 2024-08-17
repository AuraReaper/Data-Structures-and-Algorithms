#include <stdio.h>
#include <stdlib.h>

typedef struct Book{
    char title[50] ;
    char author[50] ;
    int pages ;
} book ;
    
int main(){
    book *ptr = (book *)malloc(5 * sizeof(book)) ;
    for(int i = 0 ; i < 5 ; i++) {
        printf("title :\t") ;
        scanf("%s\t" , (ptr+i)->title) ;
        printf("author :\t") ;
        scanf(" %s" , (ptr + i)->author) ;
        printf("pages :\t") ;
        scanf(" %d" , &(ptr+i)->pages) ;
    }

    for(int j = 0 ; j < 5 ; j++) {
        printf("title : %s\t" , (ptr + j)->title) ;
        printf("author : %s\t" , (ptr + j)->author) ;
        printf("pages : %d\t" , (ptr+j)->pages) ;
    }
    return 0;
}