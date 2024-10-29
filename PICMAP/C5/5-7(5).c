#include <stdio.h>
int main()
{
    float p,r;
    printf("请输入平均每场得分和平均每场板球数:\n");
    scanf("%f%f",&p,&r);
    while (p<0||r<0)
    {
        printf("请输入正确数据:\n");
        scanf("%f%f",&p,&r);
    }
    if (p<15&&r<10||p<10&&r<15)
    printf("平庸\n");
    else if (p>=20&&r>=20)
    printf("优秀\n");
    else if (p>=20&&r<15||r>=20&&p<15||p>=15&&r>=15)
    printf("良好\n");
    else
    printf("合格\n");
    return 0;
}