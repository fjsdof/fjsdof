#include <stdio.h>
int main()
{
    int x;
    printf("请输入成绩:");
    scanf("%f",&x);
    while (x>100||x<0)
    {
        printf("不是有效成绩\n请重新输入成绩:\n");
        scanf("%d",&x);
    }
    printf("评价:");
    if (x<60)
    printf("E\n");
    else if (x<70)
    printf("D\n");
    else if (x<80)
    printf("C\n");
    else if (x<90)
    printf("B\n");
    else if (x<=100)
    printf("A\n");
    return 0;
}