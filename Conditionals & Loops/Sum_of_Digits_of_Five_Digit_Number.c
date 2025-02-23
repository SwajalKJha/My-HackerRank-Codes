#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i, temp, sum;
    scanf("%d", &n);

    for (i = 0; i < 5; i++)
    {
        temp = n % 10;
        n = n / 10;
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}
