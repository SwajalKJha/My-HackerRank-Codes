#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void calculate_the_maximum(int n, int k);

void calculate_the_maximum(int n, int k)
{
    int a, b, i, and, or, xor;
    int arr[3] = {0, 0, 0};
    for (a = 1; a <= n; a++)
    {
        for (b = a + 1; b <= n; b++)
        {
            and = a & b;
            or = a | b;
            xor = a ^ b;

            if (and< k && and>= arr[0])
            {
                arr[0] = and;
            }
            if (or < k && or >= arr[1])
            {
                arr[1] = or ;
            }
            if (xor< k && xor >= arr[2])
            {
                arr[2] = xor;
            }
        }
    }

    for (i = 0; i < 3; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);

    return 0;
}
