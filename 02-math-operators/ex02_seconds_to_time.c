/*
 * Exercise: Seconds to hours, minutes and seconds
 * Reads a total number of seconds and converts it to hours : minutes : seconds
 * using integer division (/) and the remainder operator (%).
 */

#include <stdio.h>

int main() {
    int total_seconds;
    scanf("%d", &total_seconds);
    int remaining = total_seconds % 3600;
    printf("%d : %d : %d\n", total_seconds / 3600, remaining / 60, remaining % 60);
    return 0;
}
