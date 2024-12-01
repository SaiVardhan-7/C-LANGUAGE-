#include<stdio.h>
#include<string.h>
/*Assigning the value of one structure variable to 
another of the same type.*/
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    }pokemon;
    pokemon a,b;
    a.attack=100;
    a.hp=89;
    a.speed=98;
    a.tier='A';
    strcpy(a.name,"Blastoise");
    
    b=a;
    b.attack=300;   //Can be modified after deep copy also
    printf("%d\n",b.attack);
    printf("%d\n",a.attack);
    printf("%s",b.name);

    return 0;
}