#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, pr[max], bt[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("Enter the num of process: ");
    scanf("%d", &n);

    printf("Enter the burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    printf("Enter the priority of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("pr[%d]: ", i + 1);
        scanf("%d", &pr[i]);
    }

    // sort priority and bt
    int pos, temp;
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos])
            {
                pos = j;
            }
        }
        // sort priority
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        // sort bt
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }

    wt[0] = 0;

    // calculation or wt and tat
    printf("\nProcess\t\t  waiting time\t\t Burst time\t\t turn around time\n");
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

        printf("%d\t\t\t %d\t\t\t %d\t\t\t %d\n", i + 1, wt[i], bt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("\nAverage turn around time: %.2f\n", atat);

    return 0;
}