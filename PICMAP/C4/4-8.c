#include <stdio.h>
int main()
{
    int day,week;
    printf("请输入天数:\n");
    scanf("%d",&day);
    week=day/7;
    day%=7;
    printf("%d周%d天\n",week,day);
    return 0;
}