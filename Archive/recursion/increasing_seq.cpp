#include <bits/stdc++.h>
using namespace std;

void printSeq(int num,int *temp){
    if((*temp) > 0){
        int result = num - ((*temp) - 1) ;
        (*temp) -= 1 ;
        cout << result << " " ;
       return printSeq(num,temp) ;
    }
}

int main(){
    int num ;
    cin >> num ;
    printSeq(num,&num) ;
    return 0;
}