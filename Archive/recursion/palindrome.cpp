#include <bits/stdc++.h>
using namespace std;

bool check(int num,int *temp){
    if(num >= 0 && num <= 9){
        int lastDigit = (*temp) % 10 ;
        (*temp) /= 10 ;
        return (num == (lastDigit % 10)) ;
    }
    bool result = (check(num/10, temp) && (num % 10) == ((*temp) % 10)) ;
    (*temp) /= 10 ;
    return result ;
}

int main(){
    int num = 1221 ;
    // cin >> num ;
    cout << check(num,&num) ;
    return 0;
}