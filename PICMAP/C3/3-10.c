#include <stdio.h>
#define N 1000
int main()
{
    char ch[N];
    printf("请输入字符串:\n");
    gets(ch);
    FILE *outfile;
    outfile=fopen("char.txt","w");
    for (int i=0;ch[i]!='\0';i++)
    fprintf(outfile,"%c\n",ch[i]);
    return 0;
}