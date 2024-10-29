#include <stdio.h>
#define N 1000
int main()
{
    int a=0,b=0,c=0;
    char ch[N];
    printf("请输入字符串:\n");
    fgets(ch,sizeof(ch),stdin);
    for (int i=0;ch[i+1]!='\0';i++)
    {
        if (ch[i]>='0'&&ch[i]<='9')
        a++;
        else if (ch[i]>='a'&&ch[i]<='z'||ch[i]>='A'&&ch[i]<='Z')
        b++;
        else
        c++;
    }
    printf("数字个数:%d\n字母个数:%d\n其他字符个数:%d\n",a,b,c);
    return 0;
}