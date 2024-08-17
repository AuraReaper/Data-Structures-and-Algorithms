#include <stdio.h>
#include <stdlib.h>

typedef struct Employee {
    char name[100] ;
    empl *manager ;
} empl ; 

void create(char name[] , empl **head) {
    empl *newNode = (empl *)malloc(sizeof(empl)) ;
    newNode->name = name[] ;
    newNode->manager = *head ;
    *head = newNode ;
}
    
int main(){
    empl *head = NULL ;
    create("yash" , &head) ;
    return 0;
}