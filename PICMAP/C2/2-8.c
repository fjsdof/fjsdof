#include <stdio.h>
int main()
{
    float n[20],d=0,e=0;
    int a=0,b=0,c=0;
    printf ("请输入20个数:\n");
    for (int i=0;i<20;i++)
    {
        scanf("%f",&n[i]);
        if (n[i]<0)
        {
            a++;
            d+=n[i];
        }
        else if (n[i]==0)
        b++;
        else
        {
            c++;
            e+=n[i];
        }
    }
    if (a==0)
    printf("无负数输入\n");
    else
    printf("-:%d,-sum:%.2f,-aver:%.2f\n",a,d,d/a);
    printf("0:%d\n",b);
    if (c==0)
    printf("无正数输入\n");
    else
    printf("+:%d,+sum:%.2f,+aver:%.2f\n",c,e,e/c);
    return 0;
}