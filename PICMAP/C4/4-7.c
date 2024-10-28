#include <stdio.h>
#define N 7
int main()
{
    int x,y;
    printf("请输入x和y:\n");
    scanf("%d%d",&x,&y);
    printf("x\ty\n");
    y=x++;                /*将x赋给y，然后x的值增1*/
    printf("%d\t%d\n",x,y);
    x=2*(y=x);            /*将x赋给y，然后x的值倍增*/
    printf("%d\t%d\n",x,y);
    x=N;
    x=x-(y=x-y);          /*将x-y的值赋给y，y的值赋给x*/
    printf("%d\t%d\n",x,y);
    y+=(x=x-(y=x-y));     /*将x和y的值交换*/
    printf("%d\t%d\n",x,y);
    return 0;
}