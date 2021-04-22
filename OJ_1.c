#include <stdio.h>

int compare(int i)
{
    int count_1=0,count_0=0;
    while(i!=0)
    {
        if (i%2==0) count_0++;
        else count_1++;
        i/=2;
    }
    return count_1 > count_0? 1: 0;
}
int main()
{
    int i,a=0,b=0;
    for(i=1;i<=1000;i++)
    {
        if(compare(i)==1) a++;
        else b++;
    }
    printf("%d %d",a,b);
    return 0;
}