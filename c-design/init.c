#include <stdio.h>

typedef struct
{
	char xh[10];
	char xm[20];
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


void instud(Student slist[],int count)
{
	FILE *fp;
	char studentname[20];
	int i;

	printf("Pealse input studentname:\n");
	scanf("%s",studentname);
	fp = fopen(studentname, "r");
	if(fp==NULL) fp = fopen("de_student.dat","r");
	for (i=0;i<count;i++) fread(&slist[i],sizeof(Student),1,fp);
	fclose(fp);
}

void incourse(Course clist[],int count)
{
	FILE *fp;
	char coursename[20];
	int i;

	printf("Pealse input coursename:\n");
	gets(coursename);
	fp = fopen(coursename, "r");
	if(fp==NULL) fp = fopen("de_course.txt","r");
	for (i=0;i<count;i++) fread(&clist[i],sizeof(Course),1,fp);
	fclose(fp);
}

void incjlist(Score sclist[],int count)
{
	FILE *fp;
	char scorename[20];
	int i;

	printf("Pealse input studentname:\n");
	gets(scorename);
	fp = fopen(scorename, "r");
	if(fp==NULL) fp = fopen("de_scorse.txt","r");
	for (i=0;i<count;i++) fread(&sclist[i],sizeof(Score),1,fp);
	fclose(fp);
}