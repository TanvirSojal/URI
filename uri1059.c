#include<stdio.h>

int main()
{
    int n=0;

    while(n<=100)
    {
        n++;
        if (n%2==1)
        {
            continue;
        }

        printf("%d\n", n);

    }

    return 0;
}
