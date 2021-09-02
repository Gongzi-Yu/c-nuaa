// 多文件组织
int fact(int x)
{
	int i, fact = 1;
	for (i = 2; i <= x; i++)
	{
		fact *= i;
	}
	return fact;
}