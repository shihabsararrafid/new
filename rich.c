#include <stdio.h>
int main()
{
    long long int x, pbal = 100, abal, interset, i;
    long long int count = 0;
    scanf("%lld", &x);
    for (; 1;)
    {
        if (pbal >= x)
        {
            break;
        }
        else if (pbal < x)
        {
            interset = pbal / 100;
            pbal = pbal + interset;
            // pbal = abal;
            count++;
            // printf("%d\n", pbal);
        }
    }
    printf("%lld\n", count);
    return 0;
}