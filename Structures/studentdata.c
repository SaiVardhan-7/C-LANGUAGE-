#include<stdio.h>
#include<string.h>
/*Create a structure to specify data on students with these attributes:
Roll number, Name, Department, Course, Year of joining. Create 2 structure variables.
Now, create a function to check if two students have the same Department. Pass
the two structure variable as input to this function. */
int main(){
    typedef struct student{
        int rolln;
        char name[20];
        char department[20];
        char course[20];
        int year;  
    }data; 
    data a,b;
    a.rolln=1;
    strcpy(a.name,"Sai");
    strcpy(a.department,"CSE");
    strcpy(a.course,"BTech");
    a.year=2024;
    
    b.rolln=5;
    strcpy(b.name,"Vardhan");
    strcpy(b.department,"ECE");
    strcpy(b.course,"BTech");
    b.year=2024;
    if(a.department==b.department){
        printf("Both the students are in same department");
    }
    else{
        printf("Not in same department");
    }
    return 0;
}