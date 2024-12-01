#include<stdio.h>
#include<math.h>
int main(){
      //Roots of Quadratic equations
      int a,b,c,d;
      float r,r1,r2;
      printf("Enter the values of a,b and c");
      scanf("%d%d%d",&a,&b,&c);
      d=b*b-4*a*c;
      if(d==0){
            r=-b/2*a;
            printf("Roots are equal %f",r);   
      }        
      else if(d>0){
              r1=(-b+sqrt(d))/2*a;
              r2=(-b-sqrt(d))/2*a;   
              printf("The roots of the quadratic equation are %f ,%f",r1,r2);
      }
      else{ 
            printf("The roots are Imaginary");  
      }
      return 0;
}     