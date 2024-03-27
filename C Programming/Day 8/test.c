#include <stdio.h>
    
int main(){
    int classO , subF ;
    printf("Class Obtained: \n") ;
    scanf("%d" , &classO) ;
    printf("Subjects Failed: \n") ;
    scanf("%d" , &subF) ;
    switch (classO){
    case 1 :
        if(subF > 3) {
            printf("No Grace\n") ;
        } else if(subF <= 3) {
            printf("5 marks grace\n") ;
        }
        break;
    case 2 :
        if(subF > 2) {
            printf("No Grace\n") ;
        } else if(subF <= 2){
            printf("4 marks Grace\n") ;
        }
        break ;
    case 3 :
        if(subF > 1){
            printf("No Grace\n") ;
        } else if(subF == 1) {
            printf("5 marks Grace\n") ;
        }
        break ;
    default:
        printf("Wrong class input\n") ;
        break;
    }
    return 0;
}