#include <stdio.h>

int main() {
    char snack1[] = "fries";
    char snack2[]= "gomitas";
    char snack3[]= "elotes";
    float price1 = 1.50;
    float price2 = 0.50;
    float price3 = 1.25;
    int stock1=10;
    int stock2=15;
    int stock3=5;

    printf("welcome to the Snack Shop!\n");
    printf("----------------------------\n");
    printf("1. %s- $%.2f - %d available\n", snack1, price1, stock1);
    printf("2. %s- $%.2f - %d available\n", snack2, price2, stock2);
    printf("3. %s- $%.2f - %d available\n", snack3, price3, stock3);

}