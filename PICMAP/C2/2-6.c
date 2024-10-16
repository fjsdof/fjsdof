#include <stdio.h>
int main()
{
    int sum=0,i=0;
    while (i<=1000)
    {
        i++;
        if (i%3==0)
        sum+=i;
    }
    printf ("1000以内的自然数中3的倍数之和为:%d\n",sum);
    return 0;
}