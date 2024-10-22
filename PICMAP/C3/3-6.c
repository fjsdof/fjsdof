#include <stdio.h>
#define N 100
int main()
{
    char ch[N],A;
    printf("请输入字符串:\n");
    scanf("%s",ch);
    A=ch[0];
    for (int i=0;ch[i]!='\0';i++)
    {
        if (ch[i]>A)
        A=ch[i];
    }
    printf("ASCII码最大的字符为:%c\n",A);
    return 0;
}