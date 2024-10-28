#include <stdio.h>
#define N 10000
int main()
{
    int n;
    char ch1[N],ch2[N];
    printf("请输入整数:\n");
    scanf("%s",ch1);
    for (int i=0;ch1[i]!=0;i++)
    n++;
    for (int i=0;ch1[i]!=0;i++)
    ch2[n-1-i]=ch1[i];
    printf("%s",ch2);
    return 0;
}