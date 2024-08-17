#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[50] ;
    int age ;
    float height ;
};

void update(struct person *p ,int age , float height) {
    p->age = age ;
    p->height = height ; 
}
    
int main(){
    struct person per = {"yash" , 19 , 5.11} ;
    update(&per,20,5.11) ;
    printf("updated age %d\n" , per.age) ;
    printf("updated height %f\n" , per.height) ;
    return 0;
}