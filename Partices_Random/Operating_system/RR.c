#include <stdio.h>
#include <conio.h>

int main()
{
    int i, n, qt, count = 0, temp, ct = 0, bt[10], wt[10], tat[10], rem_bt[10];
    float awt = 0, atat = 0;

    printf("Enter the numbers of process: ");
    scanf("%d", &n);

    printf("Enter each process burst time: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d] : ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i]; // first time
    }

    printf("Enter Quantum time: ");
    scanf("%d", &qt);

    // process to find burst time and tat (until the process execute when burst time is not end of each processor)
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

    printf("\nProcess\t\t burst time\t\t turn around time\t\t waiting time\n");
    // calculation wt
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("%d\t\t\t %d\t\t\t %d\t\t\t %d\n", i + 1, bt[i], tat[i], wt[i]);
    }
    awt = awt / n;
    atat = atat / n;

    printf("\nAverage Waiting time: %.2f\n", awt);
    printf("\nAverage turn around  time: %.2f\n", atat);

    return 0;
}