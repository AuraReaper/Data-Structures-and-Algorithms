// pascals triangle patter using basic for loop just for practice.
#include <bits/stdc++.h>
using namespace std;

int fact(int num){
    int factorial = 1;
    for(int i=num;i>=1;i--){
        factorial *= i;
    }
    return factorial;
}

int main() {
    int n,calc=0;
    cout << "enter valuef of n: ";
    cin >> n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            calc=fact(i)/(fact(j) * fact(i-j));
            cout <<  calc << " ";
        }
        cout << endl;
    }
    return 0;
}