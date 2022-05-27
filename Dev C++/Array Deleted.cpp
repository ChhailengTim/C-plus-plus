#include<stdio.h>
#include<conio.h>
int main()
{
	int a[20];
	int i,j,s,n;
	printf("Enter n=");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	printf("\nOutput Before Delete\n");
	for(i=0;i<n;i++)
	 printf("%4d",a[i]);
	 
	//Delete
	printf("\nEnter number to delete:");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	if(a[i]==s)
	{
		for(j=i;j<n;j++)
		a[j]=a[j+1];
		n--;
		i--;
	}
	printf("\nOutput After Deleted\n");
	for(i=0;i<n;i++)
	 printf("%4d",a[i]);
	getch();
	
}
