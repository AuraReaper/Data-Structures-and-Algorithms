#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    if(y == 0){
        return x ;
    }
    else{
        int cx = x % y ;
        return gcd(y,cx) ;
    }
}

int main(){
    int x , y ;
    cin >> x >> y ;
    cout << gcd(x,y) ;
    return 0;
}