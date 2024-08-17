#include <bits/stdc++.h>
using namespace std;

void per(int arr[] , vector<int>& temp , vector< vector<int> >& ans , vector<bool>& visit) {
    if(temp.size() == visit.size()) {
        ans.push_back(temp) ;
        return ;
    }

    for(int i = 0 ; i < visit.size() ; i++) {
        if(visit[i] == 0) {
            if(i > 0 and arr[i] == arr[i - 1] and visit[i - 1] != 0) {
                continue ; 
            }
            visit[i] = 1 ;
            temp.push_back(arr[i]) ;
            per(arr , temp , ans , visit) ;
            visit[i] = 0 ;
            temp.pop_back() ;
        }
    }
}

int main() {
    int arr[] = {2,1,1,1} ;
    vector<int> temp ;
    vector< vector<int> > ans ;
    vector<bool> visit(4 , 0) ;
    per(arr , temp , ans , visit) ;
    for(int i = 0 ; i < ans.size() ; i++) {
        for(int j = 0 ; j < ans[i].size() ; j++) {
            cout << ans[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0;
}