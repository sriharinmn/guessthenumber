#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess,a;
    time_t t;
    srand((unsigned) time(&t));
    int random_number = rand() % 21;
    for(int i = 1;i < 6;i++){
        printf("guess the number: ");
        scanf("%d", &guess);
        while (guess > 20){
            printf("please enter a number less than or equal to 20: ");
            scanf("%d",&guess);
        }
        if (guess > random_number)
            printf("your guess is higher than the number\n");
        else if (guess < random_number)
            printf("your guess is lesser than the number\n");
        else{
            printf("congratulations! you guessed correctly, the number is %d", random_number);
            a = 1;
            break;
        }
    }
    
    if (a!=1)
        printf("better luck next time");
    return 0;
}
