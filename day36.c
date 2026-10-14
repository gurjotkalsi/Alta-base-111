#include <stdio.h>

int main()
{
    int n, a[100], i, cnt = 0, max = 0;
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 1)
        {
            cnt++;
            if(cnt > max)
                max = cnt;
        }
        else
        {
            cnt = 0;
        }
    }

    printf("%d", max);

    return 0;
}