#include <stdio.h>
    
int main(){
    int phy , chem , maths  , total , totalMP;
    printf("Enter phy marks : ") ;
    scanf("%d" , &phy) ;
    printf("Enter maths marks : ") ;
    scanf("%d" , &maths) ;
    printf("Enter chem marks : ") ;
    scanf("%d" , &chem) ;
    total = maths + chem + phy ;
    totalMP = maths + phy ;
    if(maths >= 65 && phy >=55 && chem>=50 && (total>=190 || totalMP>=140)) {
        printf("The candidate is eligible for admission.\n") ;
    } else {
        printf("The candidate is not eligible for admission.\n") ;
    }
    return 0;
}