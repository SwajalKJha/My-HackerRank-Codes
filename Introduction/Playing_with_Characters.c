#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch, s1[20], s2[20];
    scanf("%c", &ch);
    scanf("%s", s1);
    scanf("\n");
    scanf("%[^\n]%*s", s2);

    printf("%c", ch);
    printf("\n");
    printf("%s", s1);
    printf("\n");
    printf("%s", s2);
    return 0;
}
