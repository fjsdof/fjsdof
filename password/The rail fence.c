#include <stdio.h>
#define N 6       /*栏数*/
#define M 100
int main()
{
    int X=0,Y=0;
    char ch1[M]="\0",ch2[M]="\0";
    printf("请输入:\n");
    scanf("%s",ch1);
    for (int i=0;ch1[i]!=0;i++)
    X++;
    if (X%N==0)
    Y=X/N;
    else
    Y=(X-X%N)/N+1;
    int i=0;
    for (int j=0;j<N;j++)
    {
        for (i=i;i<Y*(j+1);i++)
        ch2[i]=ch1[j+N*(i%Y)];
    }
    printf("加密:\n");
    for (int i=0;i<N*Y;i++)
    printf("%c",ch2[i]);
    return 0;
}