#include <stdio.h>
#include <stdlib.h>

// structure defination
typedef struct {
    int *data ; // pointer to the array elements  aka we store the address of the array 
    int size ; // current number of elements aka index till which array is used
    int capacity ; // maximum capacity of the array  aka size of 1-d array stored(n)
} ArrayADT ;

// intialize array adt
ArrayADT* createArray(int capacity) {
    if(capacity <= 0) {
        return NULL ;
    }

    ArrayADT *arr = (ArrayADT*)malloc(sizeof(ArrayADT)) ;
    arr->data = (int*)malloc(capacity * sizeof(int)) ;
    arr->size = 0 ;
    arr->capacity = capacity ;
    return  arr ; // returnig the address of the array 
}


// insert at end
void insert(ArrayADT *arr , int element) {
    if(arr->size > arr->capacity) {
        printf("Array is full\n") ;
        return ;
    }

    arr->data[arr->size] = element ;
    arr->size++ ;
}

// delete at end
void delete(ArrayADT *arr) {
    if(arr->size == 0) {
        printf("Array is empty\n") ;
        return ;
    }

    arr->size-- ;
}

//reallocating memory
void increaseCapacity(ArrayADT *arr) {
    arr->capacity *= 2 ;
    arr->data = (int *)realloc(arr->data , arr->capacity * sizeof(int)) ; //does the same work as increaseCapacity
    // function , but is easy to implement .
    // basically what we are doing is we are reallocating the array in the heap and then automatically
    // copyies all the data stored in the previous array
    // also frees the old memory for us
}

ArrayADT* createSubarray(ArrayADT *arr , int start , int end) {
    ArrayADT *newArray = createArray(end - start) ;

    if(start < 0 || end > arr->size || start >= end) {
        printf("Invalid can not create subarray") ;
        return NULL ;
    }

    for(int i = start ; i < end ; i++) {
        insert(newArray,arr->data[i]) ;
    }

    return newArray ;
}
    
int main(){
    int n ;
    printf("Enter n : ") ;
    scanf("%d" , &n) ;
    ArrayADT *arr = createArray(n);

    printf("Original Array input\n") ;
    for(int i = 0 ; i < n ; i++) {
        int element;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        insert(arr, element);
    }
    
    printf("Deleting the size of the original array by 1\n") ;
    delete(arr) ;
    printf("Doubling the size of the array\n") ;
    increaseCapacity(arr);

    printf("Enter another set of input for increaed sized array\t") ;
    for(int i = n ; i <= (2*n) ; i++) {
        int element;
        printf("Enter element %d: ", i);
        scanf("%d", &element);
        insert(arr, element);
    }

    printf("enter the index from where to which index you want the subarray\n") ;
    int start , end ;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    ArrayADT *newArray = createSubarray(arr,start,end) ;

    printf("original array\t") ;
    for(int i = 0; i <= arr->size ; i++) {
        printf("%d ", arr->data[i]);
    }
    printf("\n");

    printf("Sub- Array generated\t") ;
    for(int i = 0 ; i <= 6 ; i++) {
        printf("%d " , newArray->data[i]) ;
    }

    free(arr->data);
    free(newArray->data) ;
    free(arr);
    free(newArray) ;

    return 0;
}