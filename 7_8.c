#include <stdio.h>

int getbits(int n)
{
	int i,p=1;
	for (i = 0; n / p != 0; i++, p *= 10);
	return i;
}

void split(int a[], int n, int k)
{
	int i;
	for (i = 0; i < k; i++, n /= 10) a[i] = n % 10;
}

void sorted(int a[], int k)
{
	int i, j, t;

	for (i = 0; i < k - 1; i++)
		for (j = 0; j < k - 1 - i; j++)
			if (a[j] < a[j + 1])
			{
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}

}

void reverse(int a[], int k)
{
	int i = 0;
	for (i = 0; i < k/2; i++)
	{
		int t;
		t = a[i];
		a[i] = a[k - i - 1];
		a[k - i - 1] = t;
	}
}

int combine(int a[], int k)
{
	int t=0,i=0;
	for(;i<k;i++)
	{
		t=t*10+a[i];
	}
	return t;
}

int main()
{
	int oldn =-1,n,a[5],k,n1,n2;
	printf("任意输入一个四位或三位数n，注意各位数字不能相同；\n");
	scanf("%d",&n);
	k=getbits(n);
	while(oldn!=n)
	{
		oldn=n;
		split(a,n,k);
		sorted(a,k);
		n1=combine(a,k);
		reverse(a,k);
		n2=combine(a,k);
		n=n1-n2;
		printf("%d-%d=%d\n",n1,n2,n);
	}
	return 0;
}