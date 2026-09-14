/*
 * Exercise: Paint calculator for a wall
 * Reads wall length and height, calculates area and liters of paint needed.
 */

#include <stdio.h>

int main() {
    float length, height;

    printf("Enter length and height of wall (use space): ");
    scanf("%f %f", &length, & height);

    printf("Wall area: %.2f m^2", length * height);
    printf("Paint needed: %.2f liters", length*height/6);

    return  0;
}
