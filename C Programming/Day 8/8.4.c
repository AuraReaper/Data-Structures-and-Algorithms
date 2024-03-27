#include <stdio.h>
    
int main(){
    int sum = 0 ;
    float avg ;
    printf("Enter numbers\n") ;
    for(int i = 1 ; i < 10 ; i++){
        int n ;
        scanf("%d " , &n) ;
        sum += n ;
    }
    avg = sum / 10 ;
    printf("The sum is : %d" , sum) ;
    printf("The average is : %f" , avg) ;
    return 0;
}