#include<stdio.h>

int main() {
    char name[50];
    int pages;
    float price;
    char genre;

    printf("Enter book title: ");
    scanf("%s", name);

    printf("Enter number of pages: ");
    scanf("%d", &pages);

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter genre initial: ");
    scanf(" %c", &genre);

    printf("Book %s has %d pages, costs %.2f, and genre starts with %c.\n", 
        name, pages, price, genre);

    return 0;
}
