#include <stdio.h>
#include <ctype.h>
 
// Driver Code
int main(){
    
    char day ;
    scanf("%c" , &day) ;
    int a , b ;

    switch (day) {
      case 'a':
          printf("Monday%d" );
          break;
      case 'b':
          printf("Tuesday");
          break;
      case 'c':
          printf("Wednesday");
          break;
      case 'd':
          printf("Thursday");
          break;
      case 'e':
          printf("Friday");
          break;
      case 'f':
          printf("Saturday");
          break;
      case 'g':
          printf("Sunday");
          break;
      default:
          printf("Invalid Input");
          break;
      }
    return 0;
}