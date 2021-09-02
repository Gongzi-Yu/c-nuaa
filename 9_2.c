// 求数组的最小值
#include <stdio.h>

int main()
{
    int a[10], *p=a;
    for(int i=0; i<10; i++) scanf("%d",&a[i]);
    for(int i=0; i<10; i++) if(*p>a[i]) p = &a[i];
    for(int i=0; i<10; i++) printf("%d\t",a[i]);
    printf("\nmin = %d",*p);
    return 0;
}