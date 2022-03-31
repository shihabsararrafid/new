#include <stdio.h>
#include <string.h>
int main()
{
    char str[100005];
    fgets(str, 100005, stdin);
    // printf("%s", str);
    int i, size = 0;
    // printf("Rafid");
    //  printf("%s", str);
    //  printf("%d", strlen(str));
    for (i = 0; 1; i++)
    {
        if (str[i] != '\0')
        {
            size++;
        }
        else if (str[i] == '\0')
        {
            break;
        }
    }
    int j, result = 0;
    for (j = 0; j < size; j++)
    {
        if (str[j] >= 'A' && str[j] <= 'Z')
        {
            result++;
        }
    }
    printf("%d\n", result + 1);
    return 0;
}