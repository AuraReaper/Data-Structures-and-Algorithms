#include <stdio.h>
    
int main(){
    int n1 , n2 , n3 ;
    printf("Enter sides of triangle") ;
    scanf("%d%d%d" , &n1 ,&n2 ,&n3) ;
    if(n1 == n2 && n2 == n3 && n1 == n3){
        printf("Equilateral\n") ;
    } else if(n1 == n2 || n2 == n3 || n1 == n3){
        printf("Isocelses\n") ;
    } else{
        printf("Scalene\n") ;
    }
    return 0;
}