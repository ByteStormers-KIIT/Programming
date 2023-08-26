#include<stdio.h>
int main()
{
    int num;
    printf("Enter the Number ");
    scanf("%d", &num);
    printf("Decimal %d\n ", num);
    printf("Binary: ");
    int bin[32];
    int index = 0;
    int temp = num;
    while (temp > 0)
    {
        bin[index] = temp % 2;
        temp /= 2;
        index++;
    }
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", bin[i]);
    }
    printf("\n");
    printf("Octal : %o\n", num);
    printf("Hexadecimal: %X\n", num);
    return 0;
}