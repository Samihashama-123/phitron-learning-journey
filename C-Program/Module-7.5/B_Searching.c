#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &X);
    int idx = -1;
    for (int i = 0; i < N; i++)
    {
        if (X == arr[i])
        {
            idx = i;
            break;
        }
    }
    printf("%d", idx);
    return 0;
}