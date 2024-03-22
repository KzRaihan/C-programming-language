#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, bt[max], tat[max], wt[max];
    float awt = 0, atat = 0;

    printf("\nEnter the numbers of process: ");
    scanf("%d", &n);

    printf("\nEnter the Burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    printf("\nProcess\t\t  Burst time\t\t waiting time\t\t turn around time\n");
    // calculation wt and tat
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

        printf("%d\t\t\t  %d\t\t\t %d\t\t\t %d\n", i + 1, bt[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\n");
    int total_time = 0;
    for (i = 0; i < n; i++)
    {
        printf("%d P%d | ", wt[i], i + 1); // GanTT chart.
        total_time = wt[i] + bt[i];
    }

    printf("%d", total_time);

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("Average turn around time: %.2f\n", atat);

    return 0;
}