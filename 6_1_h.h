int pow(int x,int y)
{
	int i,t=1;
	for(i=1;i<=y;i++)
	{
		t*=x;
	}
	return t;
}