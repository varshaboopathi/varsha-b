#include<stdio.h>
void main()
{
    char c;
    int t,v;
    printf("Enter an alphabet: ");
    scanf("%c",&c);
     t= (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c =='U');
    v = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (t||v)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}
