#include <stdio.h>

int main()
{
    int num, new;
    scanf("%d", &num);
    // num = num + ' ';

    int sum = 0;
    while (num > 0)
    {
        new = num % 10;
        sum = sum + new;
        num = num / 10;
    }

    printf("%d", sum);
    return 0;
}