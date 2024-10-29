#include <stdio.h>
int main()
{
    float p,r;
    printf("请输入平均每场得分和平均每场篮板球数:\n");
    scanf("%f%f",&p,&r);
    while (p<0||r<0)
    {
        printf("请输入正确数据:\n");
        scanf("%f%f",&p,&r);
    }
    if (p>=20&&r>15)
    printf("最有价值球员\n");
    else if (p>=15&&r>=10||p>=20&&r>=8||p>=12&&r>=15)
    printf("优秀球员\n");
    else if (p>=8&&r>=5)
    printf("合格球员\n");
    else if (p>=8&&r<5||p<8&&r>=5)
    printf("较差球员\n");
    else
    printf("很差球员\n");
    return 0;
}