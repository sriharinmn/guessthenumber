#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    bool ifprime;
    int count = 2;
    
    printf("enter last number 'n' to find primes between 2 and 'n': ");
    scanf("%d",&n);
    int arr[(int) n/2];
    
    arr[0] = 2;
    arr[1] = 3;
    
    for (int i = 5; i <= n ; i = i + 2)
    {
        ifprime = true;
        for (int j = 3 ; j <i ; j++)
        {
            if (i%j == 0){
                ifprime = false;
                break;
            }
        } 
        if (ifprime == true)
        {
            arr[count++] = i;
        }
    }
    for (int i = 0; i < count; i++)
        printf("%d\n", arr[i]);
    return 0;
}