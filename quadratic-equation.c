#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(void){

    double a,b,c,delta,x1,x2;
    
    printf("----------Quadratic-Equation-----------\n\n\n");

    printf("Input 'a' value for equation>> ");
    scanf("%lf", &a);
    printf("Input 'b' value for equation>> ");
    scanf("%lf", &b);
    printf("Input 'c' value for equation>> ");
    scanf("%lf", &b);

    delta = (b*b)-4*a*c;    

    if (delta>0)
    {
        printf("\n\nDelta value of equation>> %.2lf\n", delta);
        x1 = (-b+sqrt(delta)) / (2*a);
        x1 = (-b-sqrt(delta)) / (2*a);

        printf("\nx1>> %.2lf \nx2>> %.2lf", x1, x2);
        printf("\n\nTotal roots of quadratic equationx>> %.2lf", x1+x2);
         printf("\nProduct root value of equation>> %.2lf", x1*x2);
    }

    else if (delta == 0)
    {
        x1 = x2 = -b / (2 * a);
         printf("x1 = x2 = %.2lf;", x1);
         printf("\n\nTotal roots of quadratic equation>> %.2lf", x1+x1);
         printf("\nProduct root value of equation>> %.2lf", x1*x1);
    }
    else
    {
        puts("There are no root values for this equation so equation doesn't cross x axis.");
    }
    
    puts("\n\nPress a button for quit.");
 getch();
 
}