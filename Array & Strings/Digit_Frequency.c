#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    int freq[10] = {0}, digit;

    scanf("%s", s);
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = s[i] - '0';
            freq[digit]++;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", freq[i]);
    }
    return 0;
}
