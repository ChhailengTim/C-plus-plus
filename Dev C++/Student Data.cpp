#include<stdio.h>
#include<conio.h>
struct student{
	char id[20], name[20], sex;
	int age;
	float math, eng, kh, av;
};
int main(){
	float m, e, k;
	int n, i, j;
	struct student stu[20];
	printf("Enter size of array: ");
	scanf("%d", &n);
	//Input
	 for(i=0; i<n; i++){
	 	printf("Enter id: "); fflush(stdin);
	 	 gets(stu[i].id);
	 	printf("Enter name: "); fflush(stdin);
	 	 gets(stu[i].name);
	 	printf("Enter sex: "); scanf("%c", &stu[i].sex);
	 	printf("Enter age: "); scanf("%d", &stu[i].age);
	 	printf("Enter Math: "); scanf("%f", &m);
	 	printf("Enter English: "); scanf("%f", &e);
	 	printf("Enter Khmer: "); scanf("%f", &k);
	 	 stu[i].math= m;
	 	 stu[i].eng= e;
	 	 stu[i].kh= k;
	 }
	//Find Average
	for(j=0; j<n; j++){
		stu[j].av= (stu[j].math +stu[j].eng +stu[j].kh)/3;
	}


	//Output
	printf("\nOutput Data of Students\n");
	 for(i=0; i<n; i++){
	 	printf("%10s %5s %15c %5d %8.2f %5.2f %5.2f %6.2f\n", stu[i].id, stu[i].name
		 ,stu[i].sex, stu[i].age, stu[i].math, stu[i].eng, stu[i].kh, stu[i].av);
	 }




return 0;
}
