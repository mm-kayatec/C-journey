#include<stdio.h>

int main() {
    char ch;
    printf("Enter a lowercase letter: ");
    scanf(" %c", &ch);
    printf("%d\n", (int)ch - (int)'a' + 1);
    return 0;
}
