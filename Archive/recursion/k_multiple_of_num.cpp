#include <bits/stdc++.h>
using namespace std;

void print_multiples(int num,int k,int *ck){
    if((*ck) > 0){
        int result = k - ((*ck) - 1) ;
        (*ck) -= 1 ;
        cout << (num * result) << ",";
        return print_multiples(num,k,ck) ;
    }
}

int main(){
    int num , k ;
    cin >> num >> k ;
    print_multiples(num,k,&k) ;
    return 0;
}