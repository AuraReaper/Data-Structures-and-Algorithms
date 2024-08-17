#include <stdio.h>

// Function to return the sum of array
int sum(int *ptr , int n) {
    if (n == 0) {
        return 0 ;
    }
    return ptr[n] + sum(ptr , n-1) ;
}

// Function to find the maximum element
int maxi(int *ptr , int n) {
    if(n == 1) {
        return *(ptr + 1) ;
    }
    int m = maxi(ptr , n-1) ;
    if(ptr[n] > m) {
        return ptr[n] ;
    } else {
        return m ;
    }
}
// Function to find reverse
void reverse(int *ptr , int *rev , int start , int end) {
    if(start > end) {
        return ;
    }
    rev[start] = ptr[end];
    rev[end] = ptr[start];
    // Recursive call for the next element
    reverse(ptr, rev, start + 1, end - 1);
}

int main() {
    int n;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of the array is: ");
    printf("%d\n", sum(arr , n));
    printf("Max in the array is: ");
    printf("%d\n",maxi(arr , n)) ;
    int rev[n] ;
    printf("Reverse of the array is: ");
    reverse(arr , rev , 0 , n-1) ;
    for(int i = 0 ; i < n ; i++) {
        printf("%d" , rev[i]) ;
    }
    return 0;
}