#include <stdio.h>
int main()
{
    double x;
    printf("请输入x:\n");
    scanf("%lf",&x);
    if (x<-5)
    printf("y=%lf",-3*x+10);
    else if (x<0)
    printf("y=%lf",x);
    else if (x=0)
    printf("y=0");
    else if (x<=5)
    printf("y=%lf",2*x);
    else
    printf("y=%lf",4*x-10);
    return 0;
}