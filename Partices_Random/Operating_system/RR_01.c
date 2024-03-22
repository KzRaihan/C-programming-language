#include <stdio.h>
#include <conio.h>
#define max 30

int main()
{
    int i, n, qt, count = 0, temp, ct = 0, bt[max], rem_bt[max], tat[max], wt[max];
    float awt = 0, atat = 0;

    printf("Enter numbers of processes: ");
    scanf("%d", &n);

    printf("\nEnter burst time of each process: \n");
    for (i = 0; i < n; i++)
    {
        printf("bt[%d]", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }
    printf("Enter the Quantum time : ");
    scanf("%d", &qt);

    // calculate process is running until end of burst time
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
        {
            break;
        }
    }
    printf("\nProcess \t\tBurst time \t\tturnaround time \t\tWaiting time\n");
    // calculate wt and tat
    for (i = 0; i < n; i++)
    {
        wt[i] = tat[i] - bt[i];
        awt = awt + wt[i];
        atat = atat + tat[i];

        printf("%d\t\t\t %d\t\t\t %d\t\t\t\t %d\n", i + 1, bt[i], tat[i], wt[i]);
    }
    awt = awt / n;
    atat = atat / n;
    printf("\nAverage waiting time: %.2f\n", awt);
    printf("Average turnaround time: %.2f\n", atat);

    return 0;
}