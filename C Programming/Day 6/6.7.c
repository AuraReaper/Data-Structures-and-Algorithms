#include <stdio.h>

int main(){
    int a , b , c ;
    printf("Enter sides of triangle all three : ") ;
    scanf("%d%d%d" , a , b , c) ;
    if((a + b) > c){
        printf("Valid\n") ;
    } else if((b + c) > a){
        printf("Valid\n") ;
    } else if((c + a) > b){
        printf("Valid\n") ;
    } else{
        printf("InValid\n") ;
    }
    return 0;
}