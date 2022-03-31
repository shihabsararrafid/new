// adding odd numbers from range a to b
#include <stdio.h>
int main()
{
    long int a, b, c;

    scanf("%ld %ld", &a, &b);
    if (a % 2 == 1)
    {
        a = a;
    }
    else if (a % 2 == 0)
    {
        a = a + 1;
    }
    long int sum = 0;
    for (int i = a; i <= b; i = i + 2)
    {
        sum = sum + i;
    }
    printf("%ld", sum);
    return 0;
}