#include <stdio.h>
#define N 100
int main()
{
    int num,NUM,X=0;
    char ch1[N],ch2[N];
    printf("������:\n");
    scanf("%s",ch1);
    printf("λ��:\n");
    scanf("%d",&num);
    NUM=num%26;
    for (int i=0;ch1[i]!='\0';i++)
    {
        if (ch1[i]>='A'&&ch1[i]<='Z')
        {
            if (ch1[i]>'Z'-NUM)
            ch2[i]=ch1[i]+NUM-26;
            else
            ch2[i]=ch1[i]+NUM;
        }
        else if (ch1[i]>='a'&&ch1[i]<='z')
        {
            if (ch1[i]>'z'-NUM)
            ch2[i]=ch1[i]+NUM-26;
            else
            ch2[i]=ch1[i]+NUM;
        }
        else
        ch2[i]=ch1[i];
        X++;
    }
    printf("����:\n");
    for (int i=0;i<X+1;i++)
    printf("%c",ch2[i]);
    getchar();
    getchar();
    return 0;
}