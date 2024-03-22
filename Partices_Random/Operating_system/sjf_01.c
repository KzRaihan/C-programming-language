#include <stdio.h>
#include <conio.h>
#define max 30

int main()
{
    int i, j, n, temp, p[max], bt[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("\nEnter the numbers of process: ");
    scanf("%d", &n);

    printf("\nEnter process sequences: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    printf("\nEnter burst time of each process: ");
    for (i = 0; i < n; i++)
    {
        printf("\nbt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }
    // swap
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (bt[j] > bt[j + 1])
            {
                temp = bt[j];
                bt[j] = bt[j + 1];
                bt[j + 1] = temp;

                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }

    printf("Process\t\t burst time\t\t waiting time\t\t turn around time\n");
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

        printf("%d\t\t\t %d\t\t\t %d\t\t\t %d\n", p[i], bt[i], wt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("\nAverage turn around  time: %.2f\n", atat);

    return 0;
}