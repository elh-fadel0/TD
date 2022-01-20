#include <stdio.h>

int main(void)
{
    int tab[10],i, j, b, v=2;

    for(i=0 ; i<9 ; i++)
    {
        tab[i]=v;
        v++;
    }
    for(i=0; i<9; i++)
    {
        printf("tab[%d]=%d\n", i, tab[i]);
    }
    printf("on a un tableau de 10 donc la dixième case est vide\nveillez entrez un nombre pour completer la case :");
    scanf("%d",tab[9]);
    b=tab[9];
    for(i=0; i<9; i++)
    {
        if(tab[9]<tab[i])
        {
            for(j=9; j>i; j--)
            {
                tab[j]=tab[j-1];
            }
            tab[i]=b;
        }
    }
    for(i=0; i<9; i++)
    {
        printf("tab[%d]=%d\n", i, tab[i]);
    }
    
return 0;
}