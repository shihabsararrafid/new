#include <stdio.h>
int main()
{
    int t, n;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        scanf("%d", &n);
        int arr[n], arr2[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &arr2[k]);
        }
        for (int l = 0; l < n; l++)
        {
            if (arr[l] == arr2[l])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}