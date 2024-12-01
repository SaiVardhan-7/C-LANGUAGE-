#include<stdio.h>
#include<stdbool.h>
/*Create a structure 'date' that contains three members namely date,
month and year. Create 2 structure variables with different dates and now
compare the two. If the dates are equal then display message as "Equal"
otherwise "Unequal". */
typedef struct date{
    int day;
    int month;
    int year;
}date;                          //Not working when the month is string
int main(){
    date a,b;
    a.day=11;
    a.month=5;
    a.year=21000;
   
    b.day=16;
    b.month=5;
    b.year=21000;

    bool flag=true;
    if(a.day!=b.day){
        flag=false;
    }
    if(a.month!=b.month){
        flag=false;
    }
    if(a.year!=b.year){
        flag=false;
    }
    if(flag==true){
        printf("Both dates are same");
    }
    else{
        printf("Dates are different");
    }
    
    return 0;
}