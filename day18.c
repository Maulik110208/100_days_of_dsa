#include <stdio.h>

void reverse(int* nums, int start, int end) {
    while (start < end) {
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end] = temp;
        start++;
        end--;
    }
}

void rotate(int* nums, int numsSize, int k) {
    if (numsSize <= 1) return;

    k = k % numsSize;
    if (k == 0) return;

    reverse(nums, 0, numsSize - 1);

    reverse(nums, 0, k - 1);

    reverse(nums, k, numsSize - 1);
}

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    rotate(arr, n, k);

    for (int i = 0; i < n; i++) {
        printf("%d%c", arr[i], (i == n - 1 ? '\n' : ' '));
    }

    return 0;
}