#include <stdio.h>
int main()
{
    float x,y;
    printf("请输入x:\n");
    scanf("%f",&x);
    if (x<1)
    printf("y=%f\n",x);
    else if (x<10)
    printf("y=%f\n",2*x-1);
    else
    printf("y=%f\n",3*x+11);
    return 0;
}