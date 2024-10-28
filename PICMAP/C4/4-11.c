#include <stdio.h>
int main()
{
    int sum;
    printf("1~10所有数的平方和为");
    for (int i=1;i<=10;i++)
    sum+=i*i;
    printf("%d",sum);
    return 0;
}