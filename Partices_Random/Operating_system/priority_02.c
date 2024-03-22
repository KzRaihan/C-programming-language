#include <stdio.h>
#include <math.h>
#define max 20

int main()
{
    int i, j, n, temp, bt[max], pr[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("Enter the numbers of process: ");
    scanf("%d", &n);

    printf("Enter the Burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    printf("Enter the process priority: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &pr[i]);
    }

    // sort process position and burst time
    int pos;
    for (i = 0; i < n; i++)
    {
        pos = i;
        for (j = i + 1; j < n; j++)
        {
            if (pr[j] < pr[pos]) // i<j then i = j; ith index position is bigger than j then i = j;
            {
                pos = j;
            }
        }
        // sort position
        temp = pr[i];
        pr[i] = pr[pos];
        pr[pos] = temp;

        // sort burst time
        temp = bt[i];
        bt[i] = bt[pos];
        bt[pos] = temp;
    }

    // calculation of wt and tat
    wt[0] = 0;
    printf("\nProcess\t\t Burst time\t\t priority\t\t waiting time\t\t turn around time\n");
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

        printf("%d\t\t\t  %d\t\t\t %d\t\t\t %d\t\t\t %d\n", i + 1, bt[i], pr[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage waiting time: %.2f\n", awt);
    printf("\nAverage turn around time: %.2f\n", atat);

    return 0;
}