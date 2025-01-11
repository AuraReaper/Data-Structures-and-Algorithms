#include <bits/stdc++.h>
using namespace std;

class MaxHeap {
  int *arr ;
  int size ;
  int capacity ;

  public:

    MaxHeap(int n) {
      arr = new int[n] ;
      size = 0 ;
      capacity = n ;
   }

   void insert(int x) {
     if(size == capacity) {
       cout << "Heap is full" ;
       return ;
     }

     arr[size++] = x ;
     int index = size - 1 ;

     while(index > 0 && arr[index] > arr[(index-1)/2]) {
       swap(arr[index],arr[(index-1)/2]) ;
       index = (index-1)/2 ;
     }

     cout << "Inserted " << x << endl ;

   }
};

int main() {
   MaxHeap h(10) ;
   h.insert(10) ;
   h.insert(20) ;
   h.insert(30) ;
}