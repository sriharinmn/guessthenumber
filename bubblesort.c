#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main()
{
    int n;
    int arr[50];
    printf("enter number of digits to sort: ");
    scanf("%d",&n);
    printf("enter the digits to sort: \n");
    for (int i = 0 ; i < n ; i++)
        scanf("%d",&arr[i]);
    for ( int i = 0 ; i<n ; i++)
    {
        for (int j = 0 ; j<n ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("the sorted list is: \n");
    for (int i = 0 ; i < n ; i++)
        printf("%d", arr[i]);
    return 0;
}
