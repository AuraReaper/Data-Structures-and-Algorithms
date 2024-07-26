#include <stdio.h>
#include <stdlib.h>

typedef struct person {
    char name[50] ;
    int age ;
    float height ;
} person;

person* createPerson() {
    struct person *p = (struct person*)malloc(sizeof(struct person)) ;
    printf("enter name") ;
    scanf("%s\t" , p->name) ;
    printf("enter age") ;
    scanf("%d\t" , &p->age) ;
    printf("enter height") ;
    scanf("%.2f\t" , &p->height) ;
    return p ;
}
    
int main(){
    struct person *per = createPerson() ;
    printf("name %s\n" , per->name) ;
    printf("age %d\n" , per->age) ;
    printf("height %.2f\n" , per->height) ;
    free(per) ;
    return 0;
}