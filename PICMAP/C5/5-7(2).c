#include <stdio.h>
int main()
{
    float x,y,z,max,mid,min;
    printf("请输入三个数:\n");
    scanf("%f%f%f",&x,&y,&z);
    max=(x>y)?x:y;
    max=(max>z)?max:z;
    min=(x<y)?x:y;
    min=(min<z)?min:z;
    mid=x+y+z-min-max;
    printf("%f %f %f",max,mid,min);
    return 0;
}