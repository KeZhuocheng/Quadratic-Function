#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double a,b,c,g,x1,x2;
    printf("give the value of a:");
    scanf("%lf",&a);
    printf("give the value of b:");
    scanf("%lf",&b);
    printf("give the value of c:");
    scanf("%lf",&c);
    g=b*b-4*a*c;
    if(g>0)
      { x1=(-b+sqrt(g))/2*a;
       x2=(-b-sqrt(g))/2*a;
    printf("X1:%.2f\nX2:%.2f",x1,x2);}
    else if(g==0)
       { x1=(-b)/2*a;
         x2=x1;
        printf("X1:%.2f\nX2:%.2f",x1,x2);}
    else
        printf("无实数根");
    return 0;
}
