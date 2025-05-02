#include <stdio.h>

int main(){
    //Example: Print numbers drom 1 to 10
    /*int i;
    
    for(i = 1; i < 21; ++i)
    {
       printf("%d", i);
    }
    return 0;*/
//Exercies 1
int n;
printf("Enter a postive number: ");
scanf("%d", &n);

int i;
int sum = 0;
for (i = 1; i < n + 1; ++i){
    sum = sum + i;
}
printf("%d\n", sum);

//Exersice 2
int w;
printf("Enter a positive number: ");
scanf("%d", &w);

int h;
int multiplication = 1;
for (h = 1; h < n +1; ++h){
    multiplication = multiplication * h;
}
    printf("%d\n", multiplication);

}