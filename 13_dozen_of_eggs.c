#include <stdio.h>
// a dozen = 12 eggs
int main()
{

    printf("Welcome! Please enter the amount of eggs for today\n");
    int eggs;
    scanf("%d", &eggs);
    double dozen = (double) eggs / 12; // (double) was used as type casting
    printf("The number of eggs produced today is %i which equal to %f dozen\n", eggs, dozen);
    return 0;
}