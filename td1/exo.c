#include <stdio.h>


int many(void)
{   int num;
    printf("vous en voulez conbien: ");
    scanf("%d", &num);
    return num;
}

int main(void)
{
    int tot, qt, a, pu, pap;

    do
    { 
    printf("Dans nôtre entreprise on vend des coukies de qualité différente\n");
    printf(" 1 :coukie de premiere  qualité  | coût 100  francs\n");
    printf(" 2 :coukie de deuxième  qualité  | coût 150  francs\n");
    printf(" 3 :coukie de troisième qualité  | coût 1000 francs\n");
    printf(" 4 :coukie de quatrième qualité  | coût 5500 francs\n");
    printf("choisisez la qualité de coukies que vous voulez entre ces quatres: ");
    scanf("%d", &a);
    }while(!((a>0) && (a<5)));

    switch(a)
    {
        case 1: 
            {
            printf("\nvous avez choisie la coukie de première qualité. elle coûte 100  francs\n");
            pu=100;
            qt=many();
            break ;
            }
        case 2:
            {
            printf("\nvous avez choisie la coukie de deuxième qualité. elle coûte 100  francs\n");
       
            pu=150;
            qt=many();
            break ;
            }
        case 3:
            {
            printf("\nvous avez choisie la coukie de troisième qualité. elle coûte 100  francs\n");
         
            pu=1000;
            qt=many();
            break ;
            }
        case 4:
            {
            printf("\nvous avez choisie la coukie de quatrième qualité. elle coûte 100  francs\n");
         
            pu=5500;
            qt=many();
            break ;
            }
            
        default : printf("vous n'avez pas choisie dans les qualité disponible");
    }
    tot=qt*pu;
    printf("\nle prix totale est de: %d\n", tot);
    if(tot<2000) {printf("vous avez un port de 2\% et pas de remise ");}
    if((tot>2000)&&(tot<5000)) {printf("vous avez un port de 2% et une remise de 5\% ");}
    if((tot>5000)&&(tot<10000)) {printf("vous avez un port gratuite et une remise de 5\% ");}
    if(tot>10000){printf("vous avez un port gratuite et une remise de 10\% ");}


    return 0;
}
