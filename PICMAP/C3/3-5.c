#include <stdio.h>
#define X 10
int main()
{
    int N[X],A[X-1];
    printf("������%d����:\n",X);
    for (int i=0;i<X;i++)
    scanf("%d",&N[i]);
    for (int i=1;i<X;i++)
    A[i-1]=N[i]-N[i-1];
    printf("����������ֵ:\n");
    for (int i=0;i<X-1;i++)
    printf("%d ",A[i]);
    return 0;
}