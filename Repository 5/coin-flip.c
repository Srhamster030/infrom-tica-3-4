#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main (){
     srand(time(NULL)); 

     printf("tails = 1");
    ///
     printf("head = 2");

int coinFlip = (rand() % 2) + 1;
     if(coinFlip == 1){
         printf("tails");
        } 
     else (coinFlip == 2);{
        printf("heads");
     }

    return 0;
}
;C 