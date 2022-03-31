#include <stdio.h>
// first task is to remove the vowels
int main()
{
    char str[105];
    char vowel[13] = "AOIEUYaoieuy";
    scanf("%s", str);
    int i, j, k, size = 0, countsame = 0;
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
    // deleting the vowels
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 12; j++)
        {
            if (str[i] == vowel[j])
            {
                for (k = i; k < size; k++)
                {
                    str[k] = str[k + 1];
                }
                size--;
                i--;

                // countsame++;
            }
        }
    }
    // making uppercase to lowercase
    for (i = 0; i < size; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
    // printf("%d\n", size);
    int newSixe = size * 2;
    char newStr[newSixe + 2];
    int m = 0;
    for (j = 0; j <= newSixe; j++)
    {
        if (j == newSixe)
        {
            newStr[j] = '\0';
        }
        else
        {
            if (j % 2 == 1)
            {
                newStr[j] = str[m];
                m++;
            }
            else if (j % 2 == 0)
            {

                newStr[j] = '.';
            }
        }

        // printf("%d\n", j);
    }
    // for (i = 0; i < size; i++)
    // {
    //     for (j = i; j < i + 1; j++)
    //     {
    //         newStr[j] = '.';
    //         newStr[j + 1] = str[i];
    //     }
    //     // str[i + 1] = str[i];
    //     str[i] = '.';
    // }

    printf("%s", newStr);

    return 0;
}