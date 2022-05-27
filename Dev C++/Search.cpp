#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i,n,k=0;
	char name[10][20],s[20];
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("name[%d]=",i);
		fflush(stdin);
		gets(name[i]);
		
	}
	printf("\nOutput Student name\n",name);
	for(i=0;i<n;i++)
	 printf("%s\n",name[i]);
	
	
	//Search
	printf("\nEnter name to search:");
	gets(s);
	for(i=0;i<n;i++){
	 if(stricmp(name[i],s)==0)
	 {
	 	k=k+1;
	 	printf("name[%d]=%s",i,name[i]);
	 }
	if(k==0)
	 printf("Search not found");
}
	getch();
}
