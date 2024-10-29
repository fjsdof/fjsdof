#include <stdio.h>
int main()
{
    float x[3],y[3];
    printf("请输入三个点的坐标\n");
    for (int i=0;i<3;i++)
    {
        printf("第%d个点的坐标:",i+1);
        scanf("%f,%f",&x[i],&y[i]);
    }
    if ((y[1]-y[0])*(x[2]-x[1])==(y[2]-y[1])*(x[1]-x[0]))
    printf("三点在同一条直线上\n");
    else
    printf("三点不在同一条直线上\n");
    return 0;
}