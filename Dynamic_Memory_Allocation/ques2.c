#include<stdio.h>
#include<stdlib.h>
/*Enter n student data using calloc() and display failed students list.*/
struct student{
    char name[20];
    int roll;
    float marks;
};
int main(){
    int n;
    printf("Enter no.of students:");
    scanf("%d",&n);
    struct student *ptr=(struct student *)calloc(n,sizeof(struct student));
    for(int i=0;i<n;i++){
        printf("Enter Student %d details:",i+1);
        scanf("%s",(ptr+i)->name);
        scanf("%d",&(ptr+i)->roll);
        scanf("%f",&(ptr+i)->marks);
    }
    for(int i=0;i<n;i++){
        printf("Student %d Name : %s\n",i+1,(ptr+i)->name);
        printf("Roll number = %d\n",(ptr+i)->roll);
        printf("Marks = %f\n",(ptr+i)->marks);
        if((ptr+i)->marks<40){
            printf("Student %d Failed\n",i+1);
        }
        printf("\n");
    }
    return 0;
}