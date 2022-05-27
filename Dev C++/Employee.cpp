#include<stdio.h>
#include<conio.h>
int main()
{
	struct employee{
		char id[10];
		char name[20];
		char sex;
		float salary;
		float tax;
	}em[20];
	int n,i;
	float s;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter id=");
		fflush(stdin);
		gets(em[i].id);
		printf("Enter name=");
		fflush(stdin);
		gets(em[i].name);
		printf("Enter Sex=");
		scanf("%c",&em[i].sex);
		printf("Enter Salary=");
		scanf("%f",&s);
		em[i].salary=s;
	}
	for(i=0;i<n;i++)
	{
		if(em[i].salary>500)
		em[i].tax=em[i].salary*0.05;
		else
		em[i].tax=em[i].salary*0.03;
	}
	printf("\nOutput data of employee\n");
	for(i=0;i<n;i++){
	
	printf("%10s %-15s %-4c %-8.2f %-6.2f\n",em[i].id,em[i].name,em[i].sex,em[i].salary);
}
	getch();
}
