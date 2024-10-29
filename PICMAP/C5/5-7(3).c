#include <stdio.h>
int main()
{
    int a=0,b=0,c=0,d=0,e=0;
    float N[20];
    int i;
    for (int i=0;i<20;i++)
    {
        printf("请输入成绩:");
        scanf("%f",&N[i]);
        while (N[i]>100||N[i]<0)
        {
            printf("不是有效成绩\n请重新输入成绩:\n");
            scanf("%f",&N[i]);
        }
        if (N[i]<60)
        e++;
        else if (N[i]<70)
        d++;
        else if (N[i]<80)
        c++;
        else if (N[i]<90)
        b++;
        else if (N[i]<=100)
        a++;
    }
    printf("90及90分以上:%d\n80~89分:%d\n70~79分:%d\n60~69分:%d\n60分以下:%d\n",a,b,c,d,e);
    return 0;
}