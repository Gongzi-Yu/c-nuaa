#include<stdio.h>
void exchange(int *pa,int *pb)
{
    int t;
    t = *pa; *pa = *pb; *pb = t;
}
int main()
{
    int a, b, c,*pa,*pb,*pc;
    scanf("%d,%d,%d", &a,&b,&c);
    pa = &a; pb = &b; pc = &c;
    if(a>b) exchange(pa,pb);
    if(a>c) exchange(pa,pc);
    if(b>c) exchange(pb,pc);
    printf("%d\t%d\t%d\n",a,b,c);
    return 0;
}