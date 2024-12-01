#include<stdio.h>
#include<stdbool.h>
/*Now create another structure variable by assigning the 
first date to it. Compare the first and third dates.*/
int main(){
    typedef struct date{
        int day;
        int month;
        int year;
    }date;
    date a,b,c;
    a.day=12;
    a.month=8;
    a.year=2024;
 
    b.day=23;
    b.month=9;
    b.year=2004;
    
    c=a;
    bool flag=true;
    if(a.day!=c.day){
        flag=false;
    }
    if(a.month!=c.month){
        flag=false;
    }
    if(a.year!=c.year){
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