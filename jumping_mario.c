#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i;
    for (i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        int j;
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        int counth = 0, countl = 0, counte = 0;
        int k;
        for (k = 0; k < n - 1; k++)
        {

            if (arr[k + 1] > arr[k])
            {
                counth++;
            }
            else if (arr[k] > arr[k + 1])
            {
                countl++;
            }
        }
        printf("Case %d: %d %d\n", i, counth, countl);
    }
    return 0;
}