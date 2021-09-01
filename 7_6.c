#include <stdio.h>

int gcd(int x,int y)
{
	return (x%y==0)?y:gcd(y,x%y);
}
int main()
{
	int a[8]={24, 1007, 956, 705, 574, 371, 416, 35}; 
	int b[8]={60, 631,772, 201, 262, 763, 1000, 77};
	int c[8],i;
	for(i=0;i<8;i++) c[i]=gcd(a[i],b[i]);
	for(i=0;i<8;i++) printf("%d\t",c[i]);
	return 0;
}