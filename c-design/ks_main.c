#include <stdio.h>
typedef struct
{
	char xh[10];
	char xm[10];
	char xb[3];
	int nl;
}Student;

typedef struct
{
	char kh[10];
	char km[25];
	float xf;
}Course;

typedef struct
{
	char xh[10];
	char kh[10];
	float cj;
}Select;

typedef struct
{
	char xh[10];
	char xm[20];
	float cj[30];
	float zpj;
	float zxf;
}Score;


void instud(Student slist[], int count)
{
	FILE* fp;
	char studentname[20];
	int i;

	printf("Pealse input studentname:\n");
	gets(studentname);
	
	if ((fp = fopen(studentname, "rb")) == NULL) fp = fopen("de_student.dat", "rb");
	for (i = 0; i < count; i++) fread(&slist[i], sizeof(Student), 1, fp);
	fclose(fp);
}

void incourse(Course clist[], int count)
{
	FILE* fp;
	char coursename[20];
	int i;

	printf("Pealse input coursename:\n");
	gets(coursename);
	fp = fopen(coursename, "rb");
	if (fp == NULL) fp = fopen("de_course.dat", "rb");
	for (i = 0; i < count; i++) fread(&clist[i], sizeof(Course), 1, fp);
	fclose(fp);
}

void incjlist(Score sclist[], int count)
{
	FILE* fp;
	char scorename[20];
	int i;

	printf("Pealse input studentname:\n");
	gets(scorename);
	fp = fopen(scorename, "rb");
	if (fp == NULL) fp = fopen("de_scorse.dat", "rb");
	for (i = 0; i < count; i++) fread(&sclist[i], sizeof(Score), 1, fp);
	fclose(fp);
}
void disp_stud(Student slist[],int count)
{
	int i;
	for(i=0;i<count; i++)
	{
		printf("%s\t%s\t%s\t%d\n",slist[i].xh,slist[i].xm,slist[i].xb,slist[i].nl);
	}
}//输出的结果总是少一个，还需要多看看。
int main()
{
	Student slist[10];
	Course clist[10];
	Select sclist[20];
	Score cjlist[10];
	
	instud(slist,10);
	disp_stud(slist,10);
	return 0;
}