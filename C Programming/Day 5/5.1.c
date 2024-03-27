#include <stdio.h>

int main() {
    int second , hour ;
    int  min , input;
    printf("Enter the time : ") ;
    scanf("%d" , &second) ;
    input = second ;
    hour = second / 3600 ;
    min = (second % 3600) / 60 ;
    second %= 60 ;  
    printf("%d seconds = %d Hour, %d Minute and %d Second\n" , input, hour, min, second);
    return 0 ;
}
