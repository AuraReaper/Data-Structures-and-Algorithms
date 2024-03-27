#include <stdio.h> // important question
    
int main(){
    int n ;
    printf("Enter n : ") ;
    scanf("%d" , &n) ;
    int ans = 1 , temp = 2 ;
    for(int i = 1 ; i <= n ; i++){
        printf("%d " , ans) ;
        ans += temp ;
        temp *= 2 ;
    }
    
    return 0;
}