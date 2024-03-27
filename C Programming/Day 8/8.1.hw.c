#include <stdio.h>
    
int main(){
    int num ;
    printf("Enter number :") ;
    scanf("%d" , &num) ;
    long fact = 1 ;
    for(int i = 1 ; i <= num ; i++){
        fact += i ;
    }
    printf("Factrial is %d" , fact) ;
    return 0;
}