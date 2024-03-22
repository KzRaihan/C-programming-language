#include <stdio.h>
#include <math.h>
#define max 30

int main()
{
    int i, j, n, bt[max], rem_bt[max], tat[max], wt[max];

    float awt = 0, atat = 0;

    printf("Enter the n of process: ");
    scanf("%d", &n);

    printf("Enter the Burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }

    int qt, count = 0, temp, ct = 0;
    printf("Enter the quantum time: ");
    scanf("%d", &qt);

    while (1)
    {
        for (i = 0, count = 0; i < n; i++)
        {
            temp = qt;
            if (rem_bt[i] == 0)
            {
                count++;
                continue;
            }

            if (rem_bt[i] > qt)
            {
                rem_bt[i] = rem_bt[i] - qt;
            }
            else
            {
                if (rem_bt[i] >= 0)
                {
                    temp = rem_bt[i];
                    rem_bt[i] = 0;
                }
            }
            ct = ct + temp;
            tat[i] = ct;
        }
        if (n == count)
            break;
    }

    printf("\nProcess\t\t waiting time\t\t burst time\t\t turn around time\n");
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("%d\t\t\t %d\t\t\t %d\t\t\t %d\n", i + 1, wt[i], bt[i], tat[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage waiting time: %.2f\n", awt);
    printf("\nAverage turn around time: %.2f\n", atat);

    return 0;
}