// 对图书信息进行处理
#include <stdio.h>

struct book
{
	char bookID[20];
	char name[20];
	double price;

};
void input(struct book bs[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("请输入第%d本书的价格\n", i+1);
		scanf("%lf", &bs[i].price);
	}
}
double average(struct book bs[], int n)
{
	int i, sum = 0;
	for (i = 0; i < n; i++) sum += bs[i].price;
	return 1.0*sum/n;
}
int findMax(struct book bs[], int n)
{
	int i, k = 0, minn;
	for (i = 0; i < n; i++)
	{
		minn = bs[0].price;
		if (bs[i].price > minn) k = i;
	}
	return k;
}
void print(struct book bs[], int n)
{
	int i;
	printf("书号\t书名\t\t价格\n");
	printf("---------------------------\n");
	for (i = 0; i < n; i++) printf("%s\t%s\t%.2lf\n", bs[i].bookID, bs[i].name, bs[i].price);
}
void sort(struct book bs[],int n)
{
	int i, j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if (bs[j].price > bs[j + 1].price)
			{
				double t;
				t = bs[j + 1].price;
				bs[j + 1].price = bs[j].price;
				bs[j].price = t;

			}
}
int main()
{
	struct book bs[4];
	int i, t;
	for (i = 0; i < 4; i++)
	{
		printf("请输入第%d本书的书号\n",i+1);
		scanf("%s", &bs[i].bookID);
		printf("请输入第%d本书的书名\n",i+1);
		scanf("%s", &bs[i].name);
	}
	input(bs, 4);
	printf("\n");
	print(bs, 4);
	printf("平均价格为\n");
	printf("%lf\n",average(bs, 4));
	t = findMax(bs, 4);
	printf("价格最大的书为\n");
	printf("%s\t%s\t%lf\n", bs[t].bookID, bs[t].name, bs[t].price);
	sort(bs, 4);
	print(bs, 4);
}
