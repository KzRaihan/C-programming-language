#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, bt[max], tat[max], wt[max];
    float awt = 0, atat = 0;

    printf("\nEnter the number of process: ");
    scanf("%d", &n);

    printf("Enter the Burst time of Each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // priority process
    int pr[max];
    printf("Enter the Priority of Each process: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pr[i]);
    }

    // sort according to priority and burst time
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
        }

        // sort priority position of process
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        // sort Burst time according to priority
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }

    wt[0] = 0;
    // calculation wt and tat
    printf("Gantt chart(process)\t waiting time\t\t Burst time\t\t turn around time\n");
    printf("................................................................................................\n");

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
        printf(".........................................................................................\n");
    }

    awt = awt / n;
    atat /= n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("\nAverage turn around time: %.2f\n", atat);

    return 0;
}