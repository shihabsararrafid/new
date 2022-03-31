#include <stdio.h>
int main()
{
    long int N;
    scanf("%d", &N);
    long int arr[N], narr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int j = 0; j < N; j++)
    {
        narr[N - j - 1] = arr[j];
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", narr[i]);
    }
    return 0;
}