// You have N books, each with A[i] number of pages. 
// M students need to be allocated contiguous books, with each student getting at least one book.
// Out of all the permutations, the goal is to find the permutation where the sum of maximum number 
// of pages in a book allotted to a student should be minimum, out of all possible permutations.
// Note: Return -1 if a valid assignment is not possible, and allotment should be in contiguous 
// order (see the explanation for better understanding).

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n , m ;
    cout << "enter number of books " ;
    cin >> n ;
    cout << "enter number of students the books is to be disturbuted. " ;
    cin >> m ;
    vector<int> books(n) ;
    cout << "enter pages in the books\n" ;
    for(int i = 0 ; i < n ; i++) {
        cin >> books[i] ;
    }
    if(m > n) {
        return -1 ;
    }
    int start = *max_element(books.begin(), books.end()) ;
    int end = accumulate(books.begin(), books.end(), 0) ;
    int mid , ans ;
    while(start <= end) {
        int pages = 0 , student = 1 ;
        mid = start + ((end - start) / 2) ;
        for(int j = 0 ; j < n ; j++) {
            pages += books[j] ;
            if(pages > mid) {
                student++ ;
                pages = books[j] ;
            }
        } 
        if(student <= m) {
            ans = mid ;
            end = mid - 1 ;
        } else {
            start = mid + 1 ;
        }
    }
    cout << ans << endl ;
    return ans;
}