#include <stdio.h>
int main()
{

    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n, e, count = 0;
        scanf("%d %d", &n, &e);
        int arr[n];
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &arr[k]);
        }
        int sum = 0;
        for (int k = 0; k < n; k++)
        {
            sum = sum + arr[k];
        }
        for (int k = 0; k < n; k++)
        {
            if (arr[k] + e > (sum - arr[k]))
            {
                count++;
            }
            // printf("%d ", sum - arr[k]);
        }
        printf("%d\n", count);
    }
    return 0;
}