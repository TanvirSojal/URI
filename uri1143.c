#include<stdio.h>

int main()

{
    int N, i, a = 1;

    scanf("%d", &N);

    for (i=1; i<=N; i++)
    {

        printf("%d %d %d\n", a, a*a, a*a*a);
        a++;
    }

    return 0;
}
