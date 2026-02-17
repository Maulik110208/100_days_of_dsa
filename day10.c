#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char* str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    char s[1001];
    
    if (scanf("%1000s", s) != 1) return 0;

    if (isPalindrome(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}