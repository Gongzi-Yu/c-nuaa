// 删除一个数组中的某个元素
#include <stdio.h>

void output(int a[], int n)
{
	int i;
	for (i = 0; i < n; i++) printf("%d\t", a[i]);
	printf("\n");
}

int deleteElement(int a[], int n, int x)
{
	int i, j;
	for (i = 0, j = 0; i < n; i++)
	{
		if (a[i] != x)
		{
			a[j] = a[i];
			j++;
		}
	}
	return j;
}

int main()
{
	int a[8] = { 1,2,3,4,5,6,5,4 }, x, t;

	output(a, 8);

	printf("Please input x:\n");
	scanf("%d", &x);

	t = deleteElement(a, 8, x);

	output(a, t);
}