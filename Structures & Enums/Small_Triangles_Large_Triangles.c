#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    double area[n], s, tempArea;
    int i, j;
    triangle temp;
    for (i = 0; i < n; i++)
    {
        s = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        area[i] = sqrt(s * (s - tr[i].a) * (s - tr[i].b) * (s - tr[i].c));
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (area[j] > area[j + 1])
            {
                temp = tr[j];
                tr[j] = tr[j + 1];
                tr[j + 1] = temp;

                tempArea = area[j];
                area[j] = area[j + 1];
                area[j + 1] = tempArea;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}