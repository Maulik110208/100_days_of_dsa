#include <stdio.h>
#include <stdlib.h>

#define MAX_VAL 100000

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int arr[n];
    long long prefix_sum = 0;
    long long count = 0;

    int freq[2 * MAX_VAL + 1] = {0};
    int offset = MAX_VAL;

    freq[0 + offset] = 1;

    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        prefix_sum += val;

        count += freq[prefix_sum + offset];

        freq[prefix_sum + offset]++;
    }

    printf("%lld\n", count);

    return 0;
}