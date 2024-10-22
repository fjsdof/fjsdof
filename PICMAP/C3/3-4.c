#include <stdio.h>
int main()
{
    float a,b,sum,s[10];
    printf("请输入10个成绩:\n");
    for (int i=0;i<10;i++)
    {
        scanf("%f",&s[i]);
        a=s[0];
        b=s[0];
    }
    for (int i=0;i<10;i++)
    {
        if (s[i]<a)
        a=s[i];
        else if (s[i]>b)
        b=s[i];
        sum+=s[i];
    
    }
    printf("平均分:%f",(sum-a-b)/8);
    return 0;
}