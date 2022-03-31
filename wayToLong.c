#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int i;
    for (i = 1; i <= t; i++)
    {
        char str[105];
        int count = 0, l, m;
        scanf("%s", str);
        int j;
        for (j = 0; 1; j++)
        {
            if (str[j] != '\0')
            {
                count++;
            }
            else if (str[j] == '\0')
            {
                break;
            }
        }
        if (count <= 10)
        {
            printf("\n%s\n", str);
        }
        else if (count > 10)
        {
            l = count - 2;
            m = count - 1;
            printf("\n%c%d%c\n", str[0], l, str[m]);
        }
    }
    return 0;
}