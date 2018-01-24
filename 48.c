#include<stdio.h>
int main()
{
    int a, i;
    float num[100], sum = 0.0, avg;
    printf("Enter the numbers of elements: ");
    scanf("%d", &a);
    while (n > 100 || a <= 0)
    {
        scanf("%d", &a);
    }
    for(i = 0; i < a; ++i)
    {
        printf("%d. Enter number: ", i+1);
        scanf("%f", &num[i]);
        sum += num[i];
    }
    avg= sum / a;
    printf("Avg = %.2f", avg);
    return 0;
}
