#include <stdio.h>

int main(){

printf("Welcome! Please enter a radius\n");
int radius;
scanf("%i", &radius);
int area = 3.14 * (radius * radius);
printf("The area of the circle is %i given the radius %i\n", area, radius);
    return 0;
}