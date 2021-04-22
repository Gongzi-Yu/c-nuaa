#include <stdio.h>

void statistic( int *a, int n, int *posinum_ptr, int *neganum_ptr)
{
    int *p = a;
    while(p != a+n)
    {
        if(*p > 0) (*posinum_ptr)++;
        if(*p < 0) (*neganum_ptr)++;
        p++;
    }
    
}
int main()
{
    int a[10];
    int i,posi_num = 0,nega_num = 0;
    for(i=0; i<10; i++) scanf("%d", &a[i]);
    statistic(a, 10, &posi_num, &nega_num);
    printf("posi_num: %d, nega_num: %d",posi_num,nega_num);
    return 0;
}