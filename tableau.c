#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, i, a=0;
int *tab;

printf("donner la taille du tableau: ");
scanf("%d",&n);
tab = (int*)malloc(n * sizeof(int));

for(i=0; i<n; i++)
{
    *(tab+i)=a+2;
    a++;
}
for(i=0; i<n; i++)
{
   printf("tab[%d]=%d\n", i, *(tab+i));
}
free(tab);
}