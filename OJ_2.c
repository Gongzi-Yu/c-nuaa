#include <stdio.h>

int Fibonacci(int n)
{
    return n==1||n==2?1:Fibonacci(n-1)+Fibonacci(n-2);
}
int getupSecond(int a,int n,int m)
{
    return (m - a - Fibonacci(n - 3)*a)/(Fibonacci(n - 2) - 1);
}
int main()
{
   int a,n,m,x;
   int onTrian,upSecond;

   scanf("%d %d %d %d",&a,&n,&m,&x);

   upSecond = getupSecond(a,n,m);
   onTrian = a + Fibonacci(x-2)*a + Fibonacci(x-1)*upSecond - upSecond;

   printf("%d",onTrian);

   return 0;
}