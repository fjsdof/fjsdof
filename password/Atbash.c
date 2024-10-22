#include <stdio.h>
#define N 100
int main()
{
    int X=0;
    char ch[N];
    printf("请输入:\n");
    scanf("%s",ch);
    for (int i=0;ch[i]!='\0';i++)
    X++;
    printf("加密:\n");
    for (int i=X;i>=0;i--)
    printf("%c",ch[i]);
    return 0;
}