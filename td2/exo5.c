#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int t1, t2, t3, i, b, a;
    int *ve, *vp, *vi;
    printf("ce rogramme permet de classer un tableau en utilisant la parité\n");
    printf("entre la talle du tableau que vous vouler classer: ");
    scanf("%d", &t1);
    ve=(int * )calloc(t1, sizeof(int));

    //remplissage du taleau
    for(i=0; i<t1-1; i++)
    {
        printf("\nentre la valeur de ve[i]=: ");
        scanf("%d", &t1);
    }

    //traitement
    for(i=0; i<t1-1; i++)
    {
        a=(ve[i]%2)==0;
        if(a==1)
        {
            b++;
        }
    }

    free(ve);
    
    
    return 0;
}