#include <stdio.h>
#define N 90
int main()
{
    int x,y;
    printf("请输入两门课程的成绩:\n");
    scanf("%d%d",&x,&y);
    while (x<0||x>100||y<0||y>100)
    {
        printf("不是有效成绩\n请重新输入成绩:\n");
        scanf("%d%d",&x,&y);
    }
    printf("评价:");
    if (x>=N&&y>=N)
    printf("优秀\n");
    else if (x>=60&&y>=60)
    printf("合格\n");
    else if (x>=60&&y<60||x<60&y>=60)
    printf ("较差\n");
    else
    printf("很差\n");
    return 0;
}
