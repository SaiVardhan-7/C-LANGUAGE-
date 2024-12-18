// Write a C program to find the total, average of n students using structures
#include<stdio.h>
struct student{
char name[50];
	int rno;
	float marks[3];
	float total;
    float average;
};
int main()
{
	int n,sum=0;
	float avg;
	printf("Enter the no of students");
	scanf("%d",&n);
    struct student s[n];
	for(int i=0;i<n;i++){
		printf("Enter the name,rno and marks of the student %d : ",i+1);
		scanf("%s",s[i].name);
		scanf("%d",&s[i].rno);
        printf("Enter Marks of 3 Subjects:");
		for(int j=0;j<3;j++) {
			scanf("%f",&s[i].marks[j]);
		}
	}
	for(int i=0;i<n;i++){
		sum = 0;
		for(int j=0;j<3;j++) {
			sum = sum + s[i].marks[j];
		}
		s[i].total = sum;
        s[i].average = sum/3;
	}	
	for(int i=0;i<n;i++){
		printf("Name = %s\n",s[i].name);
		printf("RNo = %d\n",s[i].rno);
		printf("Total Marks = %.f\n",s[i].total);
        printf("Average = %.f\n",s[i].average);
	}
}
