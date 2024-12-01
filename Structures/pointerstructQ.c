#include<stdio.h>
#include<string.h>
/*Create a structure 'person' having attributes as age
and weight. Access its structure variables using pointers.*/
typedef struct person{
    char name[20];
    int age;
    float weight;
}person;
int main(){
    person a,b;
    strcpy(a.name,"Sai");
    a.age=18;
    a.weight=68.5;
    
    strcpy(b.name,"Vardhan");
    b.age=18;
    b.weight=70.5;

    person* ptr=&a;
    printf("%f\n",ptr->weight);
    printf("%d\n",ptr->age);
    printf("%s\n\n",ptr->name);

    person* pstr=&b;
    printf("%f\n",pstr->weight);
    printf("%d\n",pstr->age);
    printf("%s\n",pstr->name);

    return 0;
}