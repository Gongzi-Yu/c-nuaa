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
	Student stu[10] = {{"161910303","����","M",18},{"161910333","����","M",18},{"161910888","����","F",18},
	{"161910888","����","F",38},{"164567888","�淶","F",88},{"165647888","����","F",38}},stu1={"161534338","�Ϻ�","F",18},stu2,stu3[10];

	fp=fopen("my.dat","wb");
	fwrite(&stu,sizeof(stu),1,fp); // д1���ṹ
	for (i=0;i<10;i++) fwrite(&stu[i],sizeof(Student),1,fp); // д10���ṹ
	fclose(fp);
	fp=fopen("my.dat","rb");
	fread(&stu2,sizeof(Student),1,fp); // ��1���ṹ
	for (i=0;i<10;i++) fread(&stu3[i],sizeof(Student),1,fp); // �� 10���ṹ 
	fclose(fp);
}