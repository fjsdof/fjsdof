#include <stdio.h>
int main()
{
    float a,b,sum,s[10];
    printf("������10���ɼ�:\n");
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
    printf("ƽ����:%f",(sum-a-b)/8);
    return 0;
}