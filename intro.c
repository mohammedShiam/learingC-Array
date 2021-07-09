#include <stdio.h>
int main()
{
    // double arr[5];
    // printf("Input 5 Array elements \n");
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%lf", &arr[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("\nThe array value of index number %d is %.0lf \n",i,  arr[i]);
    // }


    int range;

    printf("How many element you want to enter in array \n");

    scanf("%d", &range);
     double arr[range], sum = 0;

    for(int i = 0; i < range; i++){
        printf("Iuput the %d number index or %d number Array position value\n", i, i+1);
        scanf("%lf", &arr[i]);
        sum+=arr[i];
    }

    double average = sum / range;
    printf("Sum is %.2lf and Range is %d\n", sum, range);
    printf("The Average of Array Value is %.2lf\n", average);



    return 0;
}