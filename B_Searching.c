#include <stdio.h>

int main()
{
#include <stdio.h>

    int main()
    {
        int size;
        scanf("%d", &size);

        for (int i = 0; i < size; i++)
        {
            scanf("%d", &arr[i]);
        }
        int search_num, pos = 0, i;
        scanf("%d", &search_num);
        for (i = 0; i < size; i++)
        {
            if (search_num == arr[i])
            {

                pos = 1;
                break;
            }
        }
        if (pos != 0)
        {
            printf("%d\n", i);
        }
        else
        {
            printf("-1\n");
        }

        return 0;
    }
    return 0;
}