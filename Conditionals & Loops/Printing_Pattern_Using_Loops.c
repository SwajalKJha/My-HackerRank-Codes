#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, row, col, level, len;
    scanf("%d", &n);
    len = (2 * n) - 1;
    for (row = 0; row < len; row++)
    {
        for (col = 0; col < len; col++)
        {
            for (level = 0; level < n; level++)
            {
                if (row == level || row == len - level - 1 || col == level || col == len - level - 1)
                {
                    printf("%d ", n - level);
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
