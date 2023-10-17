// 10807.c 개수세기

#include <stdio.h>

int main(void)
{
    int N;
    int V = 0;
    scanf("%d\n", &N);
    int arr[N];
    int sum = 0;
    
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d\n", &V);

    for (int i = 0; i < N; i++)
    {
        if (arr[i] == V)
        {
            sum+=1;
        }
    }
    printf("%d",sum);

    return 0;
}