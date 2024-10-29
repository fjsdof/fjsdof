#include <stdio.h>
int main()
{
    char c;
    printf("请输入字符:\n");
    scanf("%c",&c);
    if (c<' ')
    printf("你输入的是控制字符\n");
    else if (c<='9'&&c>='0')
    printf("你输入的是数字字符\n");
    else if (c<='Z'&&c>='A')
    printf("你输入的是大写字母\n");
    else if (c<='z'&&c>='a')
    printf("你输入的是小写字母\n");
    else
    printf("你输入的是其他字符\n");
    return 0;
}