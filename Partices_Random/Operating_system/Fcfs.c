#include <stdio.h>
#include <conio.h>
#define max 30

int main()
{
    int i, j, n, bt[max], wt[max], tat[max];

    float awt = 0, atat = 0;

    printf("Enter Number of Process: ");
    scanf("%d", &n);

    printf("\nEnter burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
    }

    printf("\nProcess\t\t brust time\t\t waiting time\t\tTurn around time \n");
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

        printf("%d\t\t\t%d\t\t\t%d\t\t\t%d\n", i + 1, bt[i], wt[i], tat[i]);
    }

    awt = awt / n;
    atat = atat / n;

    printf("Average wt time: %.2f\n", awt);
    printf("Average atat time: %.2f\n", atat);

    return 0;
}