#include <stdio.h>

int fsum(int *array,int n)
{
    int i,s=0;

    for(i=0;i<n;i++)
        s += array[i];
        return (s);
}
int main()
{
    int a[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 ,12, 13, 14, 15};
    int shead, stail;
    shead = fsum(a,10);
    stail = fsum(&a[5], 10);
    printf("%d,%d\n",shead,stail);
    return 0;
}