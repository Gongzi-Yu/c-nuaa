#include <stdio.h>

typedef struct {
	char xh[10];
	char xm[10];
	char xb[3];
	int nl;
}Student;
int main()
{
	FILE *fp;
	int i;
	Student stu[10] = {{"161910303","张三","M",18},{"161910333","李四","M",18},{"161910888","王二","F",18},
	{"161910888","王二","F",38},{"164567888","规范","F",88},{"165647888","过火","F",38}},stu1={"161534338","南航","F",18},stu2,stu3[10];

	fp=fopen("my.dat","wb");
	fwrite(&stu,sizeof(stu),1,fp); // 写1个结构
	for (i=0;i<10;i++) fwrite(&stu[i],sizeof(Student),1,fp); // 写10个结构
	fclose(fp);
	fp=fopen("my.dat","rb");
	fread(&stu2,sizeof(Student),1,fp); // 读1个结构
	for (i=0;i<10;i++) fread(&stu3[i],sizeof(Student),1,fp); // 读 10个结构 
	fclose(fp);
}