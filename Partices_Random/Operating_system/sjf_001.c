#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, bt[max], tat[max], wt[max], p[max];
    float awt = 0, atat = 0;

    printf("\nEnter the numbers of process: ");
    scanf("%d", &n);

    printf("\nEnter the Burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    // process sequence
    printf("\nEnter the process sequence: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    // sort using bubble sort
    int temp;
    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {
                // bt sort
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                // process sort
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("\nProcess(Gantt chart)\t  Burst time\t\t waiting time\t\t turn around time\n");
    printf("..................................................................................\n");
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

        printf("P%d | \t\t\t  %d\t\t\t %d\t\t\t %d\n--------------------------------------------------------------------\n", p[i], bt[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("Average turn around time: %.2f\n", atat);

    return 0;
}