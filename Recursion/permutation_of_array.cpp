#include <bits/stdc++.h>
using namespace std;

void permut(int arr[] , vector<int>& temp , vector< vector<int> >& ans , vector<bool>& visit) {
    if(temp.size() == visit.size()) {
        ans.push_back(temp) ;
        return ;
    }

    for(int i = 0 ; i < visit.size() ; i++) {
        if(visit[i] == 0) {
            visit[i] = 1 ;
            temp.push_back(arr[i]) ;
            permut(arr , temp , ans , visit) ;
            visit[i] = 0 ;
            temp.pop_back() ;
        }
    }
}

void permut2(vector<int>& arr2 , vector< vector<int> >& ans2 , int index ) {
    if(index == arr2.size()) {
        ans2.push_back(arr2) ;
        return ;
    }

    for(int i = 0 ; i < arr2.size() ; i++) {
        swap(arr2[i] , arr2[index]) ;
        permut2(arr2 , ans2 , index + 1) ;
        swap(arr2[i] , arr2[index]) ; // if dont it will change the positions of original array
    }
}

int main() {
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i] ;
    }
    vector<int> temp ;
    vector< vector<int> > ans ;
    vector< vector<int> > ans2 ;
    vector<int> arr1(n) ;
    for(int i = 0 ; i < n ; i++) {
        arr1[i] = arr[i] ;
    }
    vector<bool> visit(n , 0) ;
    permut(arr , temp , ans , visit) ;
    permut2(arr1 , ans2 , 0) ;
    for(int i = 0 ; i < ans.size() ; i++) {
        for(int j = 0 ; j < ans[i].size() ; j++) {
            cout << ans[i][j] << " " ;
        }
        cout << "\n" ;
    }
    return 0;
}