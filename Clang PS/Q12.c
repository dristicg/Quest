#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};  
    int size = sizeof(arr) / sizeof(arr[0]);  
    int new_size = size + 1;  // New size after adding an element
    int new_arr[new_size];  // New array to hold the updated values


    for (int i = 0; i < size; i++) {
        new_arr[i] = arr[i];
    }


    new_arr[size] = 6;

    
    printf("Updated array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", new_arr[i]);
    }

    return 0;
}