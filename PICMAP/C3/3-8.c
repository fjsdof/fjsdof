#include <stdio.h>
#define N 100
int main()
{
    char ch[N];
    int A=0;
    printf("请输入字符串:\n");
    gets(ch);
    for (int i=0;ch[i]!=0;i++)
    A++;
    if (A==0)
    printf("你输入的是空串!\n");
    else
    printf("你输入的是:%s",ch);
    return 0;
}