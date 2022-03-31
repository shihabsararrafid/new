#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int data[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &data[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {

        if (data[i] == 1)
        {
            printf("Hard\n");
            break;
        }
        else if (data[i] == 0)
        {
            count++;
        }
    }
    if (count == n)
    {
        printf("Easy\n");
    }
    return 0;
}