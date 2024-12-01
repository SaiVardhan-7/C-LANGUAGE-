#include<stdio.h>
#include<string.h>
/*A record contains name of cricketer, his age, number of test matches
that he has played and the average runs that he has scored in each test match. 
Create an array of structure to hold records of 20 such cricketer and then
write a program to read these records.*/
typedef struct cricketer{
    char firstname[50];
    char lastname[50];
    int age;
    int noofmatches;
    float avgruns;
}cricket;
int main(){
    int n;
    printf("Enter no.of cricketers:");
    scanf("%d",&n);
    cricket arr[n];
    printf("Enter %d cricketer's name, age, noofmatches and avgruns:",n);
    for(int i=0;i<n;i++){
        scanf("%s %s",arr[i].firstname,arr[i].lastname);
        scanf("%d",&arr[i].age);
        scanf("%d",&arr[i].noofmatches);
        scanf("%f",&arr[i].avgruns);
    }
    for(int i=0;i<n;i++){
        printf("Name=%s %s\n",arr[i].firstname,arr[i].lastname);
        printf("Age=%d\n",arr[i].age);
        printf("No.of matches=%d\n",arr[i].noofmatches);
        printf("Average runs=%f\n\n",arr[i].avgruns);
    }

    return 0;
}