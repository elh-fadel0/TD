#include <stdio.h>

int main(void)
{
    int n1, n2, tmp, s=0, i, b, a;
    //preformatage de texe
    printf("ce programme permet de faire la somme des nombre qu'il ya entre deux nombre\n");
    printf("entrer le premier nombre: ");
    scanf("%d", &n1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d", &n2);

    //controle sur les dux nombre saisie
    if(n1>n2)
    {
        tmp=n1;
        n1=n2;
        n2=tmp;
    }

    //calcule de la somme
    a = (n2-n1)-1;
    b = n2-1 ;
    for(i=0 ; i<a+1; i++)
    {
        s = s+b;
        b--;
    }  

    //affichage
    printf("la somme des nombres entier entre %d et %d est: %d",n1 ,n2 ,s);

    return 0;
}