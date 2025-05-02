#include <stdio.h>

int main (){
    //rectangle
    int height;
    int lenght;
    printf("Enter rectangle height: ");
    scanf("%d", &height);
    printf("Enter rectangle lenght: ");
    scanf("%d", &lenght);
    int area = height*lenght; 
    int perimeter = height+height+lenght+lenght;
    printf("Area: %d\n", area);
    printf("Perimeter: %d\n", perimeter);

 //temperartue
int fahrenheit;
printf("Enter temperature in Fahrenheit:");
scanf("%d", &fahrenheit);
int celsuis= (fahrenheit-32)/1.8;
printf("n%d°F = ", fahrenheit);
printf("%d°C\n", celsuis);

//minutes and hours
int mins=349;
int hours=mins/60;
extramins=mins%60;

printf("\n%d minutes is equal to", mins);
printf("%d hours and", hours);
printf("%s minutes.\n", extramins);

return 0;
}