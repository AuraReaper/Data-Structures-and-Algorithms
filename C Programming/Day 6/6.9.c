#include <stdio.h>

int main (){
    int sub1 , sub2 , sub3 , sub4 , sub5 ;
    float percent ;
    printf("Enter marks of all subjects ") ;
    scanf("%d%d%d%d%d" , sub1,sub2,sub3,sub4,sub5) ;
    percent = ((sub1+sub2+sub3+sub4+sub5) / 500) * 100 ;
    if(percent >= 90 && percent <= 100){
        printf("Grade : O") ;
    } else if(percent >= 80 && percent <= 89){
        printf("Grade : E") ;
    } else if(percent >= 70 && percent <= 79){
        printf("Grade : A") ;
    } else if(percent >= 60 && percent <= 69){
        printf("Grade : B") ;
    } else if(percent >= 50 && percent <= 59){
        printf("Grade : C") ;
    } else if(percent >= 40 && percent <= 49){
        printf("Grade : D") ;
    } else {
        printf("Grade : F") ;
    }
    return 0 ;
}