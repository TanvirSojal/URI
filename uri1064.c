#include<stdio.h>

int main()

{
    double a, b, c, d, e, f;
    int count = 0;
    double sum = 0;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

    if (a>0)
    {
        count = count + 1;
        sum = sum + a;
    }

    if (b>0)
    {
        count = count + 1;
        sum = sum + b;
    }
    if (c>0)
    {
        count = count + 1;
        sum = sum + c;
    }

    if (d>0)
    {
        count = count + 1;
        sum = sum + d;
    }

    if (e>0)
    {
        count = count + 1;
        sum = sum + e;
    }

    if (f>0)
    {
        count = count + 1;
        sum = sum + f;
    }

    printf("%d valores positivos\n", count);
    printf("%.01lf\n", sum/count);


    return 0;
}

