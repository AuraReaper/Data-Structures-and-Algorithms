#include <stdio.h>

int main() {
    float cp , sp , ans , discount , pMargin;
    printf("Enter the cost/buying price: ") ;
    scanf("%f" , &cp) ;
    printf("Enter the selling price: ") ;
    scanf("%f" , &sp) ;
    printf("Enter the discount: ") ;
    scanf("%f" , &discount) ;
    sp = sp - ((discount * sp) / 100) ;
    ans = sp - cp ;
    pMargin = (ans / cp) * 100 ;
    if(ans > 0){
        printf("Seller made a profit of %.2f " , pMargin) ;
    } else {
        printf("Seller made a loss of %.2f " , (pMargin * -1)) ;
    }
}