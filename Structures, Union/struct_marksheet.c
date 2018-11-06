#include<stdio.h>
#include<string.h>
struct modules{
	char desd[5][30];//={"Module 1 for DESD.","Module 2 for DESD.","Module 3 for DESD.","Module 4 for DESD."};
	char dac[5][30];//={"Module 1 for DAC.","Module 2 for DAC.","Module 3 for DAC.","Module 4 for DAC.","Module 5 for DAC."};
	char dssd[5][30];//={"Module 1 for DSSD.","Module 2 for DSSD.","Module 3 for DSSD."};
	};
struct marksheet{
	char name[30];
	int rollno;
	float marks;
	char course[10];
	struct modules m;
	};

int main()
{
	int n,mod;
	printf("Enter number of students: ");
	scanf("%d",&n);
	struct marksheet stu[n];
	for(int i=0;i<n;i++)
	{
		printf("Student name: \n");
		scanf("%s",stu[i].name);
		printf("Student rollno: ");
		scanf("%d",&stu[i].rollno);
		printf("Student course: ");
		scanf("%s",stu[i].course);
		printf("Enter number of modules: ");
		scanf("%d",&mod);
		if(strcmp(stu[i].course,"DESD")==0)
		{
			for(int j=0;j<mod;j++)
			{
				printf("Enter DESD module %d\n",j+1);
				scanf("%s",stu[i].m.desd[j]);
			}
		}
		else if(strcmp(stu[i].course,"DAC")==0)
		{
			for(int j=0;j<mod;j++)
			{
				printf("Enter DAC module %d\n",j+1);
				scanf("%s",stu[i].m.dac[j]);
			}
		}
		else
		{
			for(int j=0;j<mod;j++)
			{
				printf("Enter DSSD module %d\n",j+1);
				scanf("%s",stu[i].m.dssd[j]);
			}
		}
		printf("Student Total Marks: ");
		scanf("%f",&stu[i].marks);
	}
	for(int i=0;i<n;i++)
	{
		printf("Student name: %s\n",i+1,stu[i].name);
		printf("Student rollno: %d\n",i+1,stu[i].rollno);
		printf("Student course: %s\n",i+1,stu[i].course);
		printf("Student Total marks: %.2f\n",i+1,stu[i].marks);
		printf("Student modules :\n",i+1);
		if(strcmp(stu[i].course,"DESD")==0)
		{
			for(int j=0;j<mod;j++)
				printf("%s\n",stu[i].m.desd[j]);
		}
		else if (strcmp(stu[i].course,"DAC")==0)
		{
			for(int j=0;j<mod;j++)
				printf("%s\n",stu[i].m.dac[j]);
		}
		else if(strcmp(stu[i].course,"DSSD")==0)
		{
			for(int j=0;j<mod;j++)
				printf("%s\n",stu[i].m.dssd[j]);
		}
		else
			;
	}
	return 0;
}
