
#include <stdio.h>

int main()
{
    int n, m;
    int i, j, k;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter number of resource types: ");
    scanf("%d", &m);

    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], finish[10], safeSeq[10];

    /* Input Allocation Matrix */
    printf("\nEnter Allocation Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &alloc[i][j]);
        }
    }

    /* Input Max Matrix */
    printf("\nEnter Max Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &max[i][j]);
        }
    }

    /* Input Available Resources */
    printf("\nEnter Available Resources:\n");

    for (j = 0; j < m; j++)
    {
        scanf("%d", &avail[j]);
    }

    /* Calculate Need Matrix */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            need[i][j] = max[i][j] - alloc[i][j];
        }
    }

    /* Initialize finish array */
    for (i = 0; i < n; i++)
    {
        finish[i] = 0;
    }

    int count = 0;

    /* Banker's Algorithm */
    while (count < n)
    {
        int found = 0;

        for (i = 0; i < n; i++)
        {
            if (finish[i] == 0)
            {
                int possible = 1;

                for (j = 0; j < m; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        possible = 0;
                        break;
                    }
                }

                if (possible == 1)
                {
                    for (k = 0; k < m; k++)
                    {
                        avail[k] = avail[k] + alloc[i][k];
                    }

                    safeSeq[count] = i;
                    finish[i] = 1;
                    count++;
                    found = 1;
                }
            }
        }

        if (found == 0)
        {
            printf("\nSystem is NOT in a safe state.\n");
            return 0;
        }
    }

    /* Display Need Matrix */
    printf("\nNeed Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", need[i][j]);
        }
        printf("\n");
    }

    /* Display Safe Sequence */
    printf("\nSystem is in a SAFE state.\n");

    printf("Safe Sequence: ");

    for (i = 0; i < n; i++)
    {
        printf("P%d", safeSeq[i]);

        if (i < n - 1)
        {
            printf(" -> ");
        }
    }

    printf("\n");

    return 0;
}
