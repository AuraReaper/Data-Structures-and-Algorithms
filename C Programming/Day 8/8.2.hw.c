#include <stdio.h>
#include <math.h>
    
int main(){
    int num ;
    printf("Enter number : ") ;
    scanf("%d" , &num) ;
    int sum = 0  , cnum = num;
    while(num > 0){
        sum += pow((num % 10),3) ;
        num /= 10 ;
    }
    if(sum == cnum){
        printf("Armstrong number\n");
    } else {
        printf("Not Armstrong number\n");
    }
    return 0;
}