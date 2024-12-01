#include<stdio.h>
#include<string.h>
/*Features of structures : Nesting one structure within another structure*/
int main(){
    typedef struct pokemon{
        int hp;
        int speed;            //Applying nesting structure concept
        int attack;
        char tier;
        char name[15];
    }pokemon;
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[10];
    }legendarypokemon;
    typedef struct godpokemon{
        legendarypokemon legend;
        int specialattack;
    }godpokemon;    
    
    godpokemon a;
    a.specialattack=300;
    strcpy(a.legend.ability,"Turn anyone to stone");
    a.legend.normal.attack=500;
    strcpy(a.legend.normal.name,"Pikachu");
    a.legend.normal.tier='P';
 
    printf("%s\n",a.legend.ability);
    printf("%d",a.legend.normal.attack);

    return 0;
}