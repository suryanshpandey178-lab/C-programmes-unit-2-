//function returning pointer to array elements
#include <stdio.h>

int* display(int a[], int index) {
    return &a[index];
}

int main() {
    int arr[5] = {10, 20, 30, 40, 50};   
    
    int *p = display(arr, 2);           

    printf("Value = %d", *p);          

    return 0;
}
