#include <stdio.h>
#include <stdlib.h>

typedef struct Person {
        char name[50] ;
        int age ;
        float height ;
} ;

void printPerson(struct Person p) {
    printf("Name %s\n" , p.name) ;
    printf("Age %d\n" , p.age) ;
    printf("Height %f\n" , p.height) ;
}
   
int main(){
    struct Person person = {"Yash" , 19 , 5.11} ;
    printPerson(person) ;
    return 0;
}