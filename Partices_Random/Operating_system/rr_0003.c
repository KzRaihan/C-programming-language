#include <stdio.h>

int main()
{
    int num, Quantum;
    printf("Enter the number of Processes: ");
    scanf("%d", &num);

    int bt[100], rem_bt[100], ct[100] = {0};

    // Input the burst times
    for (int i = 0; i < num; i++)
    {

        printf("bt[%d]: ", i + 1);
        scanf("%d", &bt[i]);
        rem_bt[i] = bt[i];
    }

    printf("\nEnter the Quantum time: ");
    scanf("%d", &Quantum);

    printf("\nGantt Chart:\n0");

    int time = 0, completed = 0, totalWaitTime = 0;
    while (completed != num)
    {
        for (int i = 0; i < num; i++)
        {
            if (rem_bt[i] > 0)
            {
                if (rem_bt[i] > Quantum)
                {
                    time += Quantum;
                    rem_bt[i] -= Quantum;
                    printf(" | P%d | %d", i + 1, time);
                }
                else
                {
                    time += rem_bt[i];
                    ct[i] = time;
                    totalWaitTime += time - bt[i];
                    rem_bt[i] = 0;
                    completed++;
                    printf("  | P%d | %d", i + 1, time);
                }
            }
        }
    }

    float avgWaitTime = (float)totalWaitTime / num;
    printf("\n\nAverage Waiting Time: %.2f ms\n", avgWaitTime);

    return 0;
}
