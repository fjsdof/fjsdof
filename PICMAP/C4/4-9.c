#include <stdio.h>
int main()
{
    int a,b;
    printf("请输入一个两位数:\n");
    scanf("%d",&a);
    b=(a%10)*10+a/10;
    printf("%d",b);
    return 0;
}