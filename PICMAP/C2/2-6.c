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
    printf ("1000���ڵ���Ȼ����3�ı���֮��Ϊ:%d\n",sum);
    return 0;
}