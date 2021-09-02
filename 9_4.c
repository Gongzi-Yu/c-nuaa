// 将一个具有n个元素的数组循环左移k位
#include <stdio.h>

void moveLeft(int *a, int n)
{
    int *p = &a[n-1],b = a[n-1];
    while(p != a)
    {
        int t;
        t = b;
        b = *(p-1);
        *(p---1) = t;
    }
    a[n-1] = b;
}
void rotateLeft(int *a, int n, int k)
{
    int i;
    for(i = 0; i < k; i++) moveLeft(a,n);
}
int main()
{
    int a[]={ 2, 3, 4, 5, 6, 7, 8, 9 };
    int i, k;
    printf("input k please: \n");
    scanf("%d",&k);
    for(i = 0; i < 8; i++) printf("%d\t",a[i]);
    printf("\n");
    rotateLeft(a,8,k);
    for(i = 0; i < 8; i++) printf("%d\t",a[i]);
    return 0;
}