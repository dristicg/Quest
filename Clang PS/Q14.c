#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4};  
    int size = sizeof(nums) / sizeof(nums[0]);  
    int new_size = size + 1;  
    int new_element = 0;
    int new_nums[new_size];  

    
    new_nums[0] = new_element;

    
    for (int i = 0; i < size; i++) {
        new_nums[i + 1] = nums[i];
    }

    
    printf("Updated array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", new_nums[i]);
    }

    return 0;
}