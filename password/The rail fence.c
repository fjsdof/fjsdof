#include <stdio.h>
#define N 10000
int main()
{
    int X=0,Y=0,M;
    char ch1[N]="\0",ch2[N]="\0";
    printf("请输入:\n");
    gets(ch1);
    printf("请输入栏数:\n");
    scanf("%d",&M);
    if (M>0)
    {
        for (int i=0;ch1[i]!=0;i++)
        X++;
        if (X%M==0)
        Y=X/M;
        else
        {
            Y=(X-X%M)/M+1;
            for (int i=X;i<Y*M;i++)
            ch1[i]=' ';
            Y++;
        }
        int i=0;
        for (int j=0;j<M;j++)
        {
            for (i=i;i<Y*(j+1);i++)
            ch2[i]=ch1[j+M*(i%Y)];
        }
        printf("加密:\n{");
        for (int i=0;i<M*Y;i++)
        printf("%c",ch2[i]);
        printf("}");
    }
    else if (M<0)
    {
        for (int i=0;ch1[i]!=0;i++)
        X++;
        M=-M;
        if (X%M==0)
        Y=X/M;
        else
        {
            Y=(X-X%M)/M+1;
            for (int i=X;i<Y*M;i++)
            ch1[i]=' ';
            Y++;
        }
        int i=0;
        for (int j=0;j<Y;j++)
        {
            for (i=i;i<M*(j+1);i++)
            ch2[i]=ch1[j+Y*(i%M)];
        }
        printf("解密:\n{");
        for (int i=0;i<M*Y;i++)
        printf("%c",ch2[i]);
        printf("}");
    }
    else
    printf("有必要吗?\n%s",ch1);
    return 0;
}