#include <stdio.h>

/*-------------------------------------------------------*/

typedef struct {
    char nom[20];
    char prenom[20];
    int age;
    float taille;
} pers;

/*-------------------------------------------------------*/

void saisi (pers *p)
{
    printf("vous ete le user1\n");
    printf("entrer votre nom : ");
    gets(p->nom);
    printf("entrer votre prenom : ");
    gets(p->prenom);
    printf("donner votre age : ");
    scanf("%d", &(p->age));
    printf("donner votre taille : ");
    scanf("%.2f", &(p->taille));
}

/*-------------------------------------------------------*/

void afficheruser (pers *p)
{
    printf ("\n");
    printf ("\n");
    printf("bojour %s %s\n", p->prenom, p->nom);
    printf ("=========================\n");
    printf("age = %d    | taille = %f", p->age, p->taille);
}

/*-------------------------------------------------------*/

int main()
{
    pers user1;
    
    saisi (&user1);
    afficheruser (&user1);
    //printf("\nvoutre nom est %s", user1.nom);
    return 0;
}