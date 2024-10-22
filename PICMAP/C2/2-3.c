#include <stdio.h>
int main()
{
    float x,y,z;
    printf("请输入三个数：\n");
    scanf("%f,%f,%f",&x,&y,&z);
    if (x<y)
    {
        if (x<z)
        printf("min=%f\n",x);
        else
        printf("min=%f\n",z);
    }
    else
    {
        if (y<z)
        printf("min=%f\n",y);
        else
        printf("min=%f\n",z);
    }
    return 0;
}