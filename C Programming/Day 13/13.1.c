#include <stdio.h>

int printNum(int n) {
    if (n == 1) {
        printf("%d\n" , n) ;
        return n ;
    } else {
        printf("%d\n" , n) ;
        return printNum(n-1) ;
    }
}
    
int main(){
    int n ;
    printf("Enter n : ") ;
    scanf("%d" , &n) ;
    printNum(n) ;
    return 0;
}