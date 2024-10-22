#include <stdio.h>
#define N 100
int main()
{
    char ch[N];
    int n=0,m=0;
    printf("请输入字符串:\n");
    scanf("%s",ch);
    for (int i=0;ch[i]!='\0';i++)
    {
        if (ch[i]>='a'&&ch[i]<='z')
        n++;
        if (ch[i]>='A'&&ch[i]<='Z')
        m++;
    }
    printf("大写字母出现次数:%d\n小写字母出现次数:%d\n",m,n);
    return 0;
}