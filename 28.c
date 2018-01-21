#include <stdio.h>
void main()
{
    long s, temp, digit, b= 0;
    printf("Enter the number \n");
    scanf("%ld", &s);
    temp = s;
    while (s> 0)
    {
        digit = s % 10;
        b = b+ digit;
        s/= 10;
    }
    printf("Given number = %ld\n", temp);
    printf("Sum of the digits %ld = %ld\n", temp, b);
}
