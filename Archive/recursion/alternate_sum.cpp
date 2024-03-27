#include <bits/stdc++.h>
using namespace std;

int altSum(int num,int *temp,int sum){
    if((*temp) > 0){
        int num1 = num - ((*temp) - 1) ;
        (*temp) -= 1 ;
        if(num1 % 2 == 0){
            num1 *= -1 ;
        }
        sum += num1 ;
        return altSum(num,temp,sum) ;
    }
    return sum ;
}

int main(){
    int num ;
    cin >> num ;
    cout << altSum(num,&num,0) ;
    return 0;
}