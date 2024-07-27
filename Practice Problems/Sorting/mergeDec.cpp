#include <bits/stdc++.h>
using namespace std;

void merge(int arr[] , int start , int mid , int end) {
    vector<int> temp(end - start + 1) ;
    int left = start , right = mid + 1 , index = 0 ;

    while(left <= mid and right <= end) {
        if(arr[left] >= arr[right]) {
            temp[index] = arr[left] ;
            index++ , left++ ;
        } else {
            temp[index]  = arr[right] ;
            index++ , right++ ;
        }
    } 

    //if left array is not empty 
    while(left <= mid) {
        temp[index] = arr[left] ;
        index++ , left++ ;
    }

    //if tight array is not empty
    while(right <= end) {
        temp[index] = arr[right] ;
        index++ , right++ ;
    }

    //copying the values of temp in the original array
    index = 0 ;
    while(start <= end) {
        arr[start] = temp[index] ;
        index++ , start++ ;
    }
}

void mergeSort(int arr[] , int start , int end) {
    if(start == end) {
        return ;
    }

    int mid = start + ((end - start) / 2) ;
    mergeSort(arr,start,mid) ; // left half
    mergeSort(arr,mid+1,end) ; // right half
    merge(arr,start,mid,end) ;
}

int main() {
    int arr[] = {6,3,1,2,8,9,10,7,3,10} ;
    mergeSort(arr,0,9) ;
    for(int i = 0 ; i <10 ; i++) {
        cout << arr[i] << " " ;
    }
    return 0;
}