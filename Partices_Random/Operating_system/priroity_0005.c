#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, bt[max], tat[max], wt[max];

    float awt = 0, atat = 0;

    printf("Enter the n of process: ");
    scanf("%d", &n);

    printf("Enter the Burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }
    int pr[max];
    printf("Enter the process sequence: \n");
    for (i = 0; i < n; i++)
    {
        printf("p[%d]: ", i + 1);
        scanf("%d", &pr[i]);
    }
    // sort priority and bt
    int temp, pos;
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos])
            {
                pos = j;
            }

            // sort pri
            temp = pr[i];
            pr[i] = pr[pos];
            pr[pos] = temp;

            // sort bt
            temp = bt[i];
            bt[i] = bt[pos];
            bt[pos] = temp;
        }
    }

    printf("\nGantt chart\t\t waiting time\t\t burst time\t\t turn around time\n");
    wt[0] = 0;
    for (i = 0; i < n; i++)
    {
        wt[i] = 0;
        tat[i] = 0;

        for (j = 0; j < i; j++)
        {
            wt[i] = wt[i] + bt[j];
        }
        tat[i] = wt[i] + bt[i];

        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("P | %d\t\t\t %d\t\t\t %d\t\t\t %d\n", i + 1, wt[i], bt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage waiting time: %.2f\n", awt);
    printf("\nAverage turn around time: %.2f\n", atat);

    return 0;
}