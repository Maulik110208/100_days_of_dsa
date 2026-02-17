#include <stdio.h>
#include <string.h>

void mirrorString(char* str) {
    int length = strlen(str);
    int left = 0;
    int right = length - 1;
    char temp;

    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    char codeName[1001];

    if (scanf("%1000s", codeName) != 1) return 0;

    mirrorString(codeName);

    printf("%s\n", codeName);

    return 0;
}