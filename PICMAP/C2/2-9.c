#include <stdio.h>
int main()
{
    int n[20],a=0,b=0,c=0,d=0,e=0,f=0;
    printf("请输入20个数:\n");
    for(int i=0;i<20;i++)
    {
        scanf ("%d",&n[i]);
        if (n[i]<0)
        {
            e++;
            if (e==1)
            a=n[i],b=n[i];
            else
            {
                if (n[i]<a)
                a=n[i];
                else if (n[i]>b)
                b=n[i];
            }
        }
        else if (n[i]>0)
        {
            f++;
            if (f==1)
            c=n[i],d=n[i];
            else
            {
                if (n[i]<c)
                c=n[i];
                else if (n[i]>d)
                d=n[i];
            }
        }
    }
    if (e==0)
    printf("无负数输入\n");
    else
    printf("-min:%d,-max:%d\n",a,b);
    if (f==0)
    printf("无正数输入\n");
    else
    printf("+min:%d,+max:%d\n",c,d);
    return 0;
}