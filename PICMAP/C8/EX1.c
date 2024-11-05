#include <stdio.h>
int max(int a,int b)
{
    return (a>b)?a:b;
}
int main()
{
    int a,b;
    printf("请输入两个数字:\n");
    scanf("%d %d",&a,&b);
    printf("更大的数为:%d",max(a,b));
    return 0;
}