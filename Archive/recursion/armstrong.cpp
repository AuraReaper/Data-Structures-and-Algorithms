#include <bits/stdc++.h>
using namespace std;

int check(int num,int digits){
    if(num == 0){
        return 0 ;
    }
    int result = check(num/10,digits) + pow((num%10),digits) ;
    return result ;
}

int main(){
    int num ;
    cin >> num ;
    int cnum = num ;
    int count = 0 ;
    while(cnum > 0){
        count++ ;
        cnum /= 10 ;
    }
    int ans = check(num,count) ;
    if(ans == num){
        cout << "yes" << endl ;
    }
    else{
        cout << "no\n" ;
    }
    return 0;
}