#include <stdio.h>
#include <math.h>

int main()
{
    float d, a, b, c, x0, x1, x2;
    printf("l'equaion du second degré s'ecrit de façon suivante: ax^2+bx+c=0 \n");
    printf("saisisez la valeur de a: ");
    scanf("%f", &a);
    printf("saisisez la valeur de b: ");
    scanf("%f", &b);
    printf("saisisez la valeur de c: ");
    scanf("%f", &c);
     printf("l'equaion du second degré est: %.1fx^2+%.1fx+%.1f=0 \n", a, b, c);
    
    d=(b*b)-4*a*c;
    printf("delta est egale à: %.1f donc \n", d);
    x0=-b/(2*a);
    x1=(-b+sqrt(d))/(2*a);
    x2=(-b-sqrt(d))/(2*a);
   
    if(a==0)
        printf("l'equation n'est pas une equation du second degré\n");
    if (d==0)
        printf("l'equation admet une solution double x0=%.1f\n", x0);
    else if(d>0)
        printf("l\'equation admet deux solution x1=%.2f | x2=%.2f \n", x1, x2);
    else
        printf("l'equation n'admet pas de solution réel");

    return 0;

}