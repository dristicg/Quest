
#include <stdio.h>

int main() {
    int nums[] = {1, 2, 3, 4, 5};  
    int size = sizeof(nums) / sizeof(nums[0]); 
    int new_size = size - 1;  

    
    printf("Updated array: ");
    for (int i = 0; i < new_size; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}