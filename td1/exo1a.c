#include <stdio.h>

int main()
{
    int n, s=0, i, a;
    printf("cette permet d'afficher les n première nombre \nentrer le n ième element de la suit: ");
    scanf("%d", &n);
    a=n;
    for(i=0; i=n; i++)
    {
        s=s+n;
        n--;
    }
printf("la somme des entiers de 1 à %d est: %d", a, s);
return 0;
}