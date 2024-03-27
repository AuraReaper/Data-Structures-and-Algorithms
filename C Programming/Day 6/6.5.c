#include <stdio.h>

int main(){
    int a , b , c ;
    printf("Enter the values of a , b and c :") ;
    scanf("%d%d%d" , &a , &b , &c) ;
    float root1 , root2 , d;
    d = (b * b) - (4 * a * c) ;
    root1 = (b /(2 * a)) * -1 ;
    root2 = (c / a) ;
    if(d == 0){
        printf("The roots are real and equal\n") ;
        printf("Roots are %.2f \n" , root1) ;
    } else if(d > 0){
        printf("The roots are real and unequal\n") ;
        printf("Roots are %.2f and %.2f \n" , root1 , root2) ;
    } else if(d < 0) {
        printf("The roots are imaginary and in conjugate pairs\n") ;
        printf("Roots are %.2f and %.2f " , root1 , root2) ;
    }
    return 0 ;
}