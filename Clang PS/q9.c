//9. Sort an Array in Ascending Order Example: Input: nums = [4,2,8,5,1]; Output: nums = [1,2,4,5,8].

#include <stdio.h>
int main() {
    int nums[] = {4, 2, 8, 5, 1}; 
    int n = sizeof(nums) / sizeof(nums[0]); 
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                temp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = temp;
            }
        }
    }

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    return 0;
}