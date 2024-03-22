#include <stdio.h>
#include <math.h>
#define max 20

int main()
{
    int i, j, n, pos, temp, bt[max], pr[max], wt[max], tat[max];
    float awt = 0, atat = 0;

    printf("\nEnter the number of process: ");
    scanf("%d", &n);

    printf("\nEnter the burst time of each process: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &bt[i]);
    }

    printf("\nEnter the priority of each process: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pr[i]);
    }

    // arrange pos and bt according to priority
    // * two major work : 1> sort priority. 2> sort burst time
    for (i = 0; i < n; i++)
    {
        pos = i;

        for (j = i + 1; j < n; j++)
        {
            // means priority of process this statement
            if (pr[j] < pr[pos])
            {
                pos = j;
            }
        }
        // priority sort
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        // burst time sort
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }

    wt[0] = 0;

    // calculation wt and tat
    printf("\nProcess\t\t Burst time\t\t Priority\t\t waiting time\t\t turn around time\n");
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

        printf("%d\t\t\t  %d\t\t\t  %d\t\t\t %d\t\t\t %d\n", i + 1, bt[i], pr[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("\nAverage turn around  time: %.2f\n", atat);

    return 0;
}