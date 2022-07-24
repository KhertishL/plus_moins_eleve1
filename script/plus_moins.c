#include<stdio.h>

int plus_moins(int choix_joueur, int valeur_a_trouver)
{
    if(choix_joueur < valeur_a_trouver)
    {
        printf("Plus\n");
        return 0;
    }
    
    if(choix_joueur > valeur_a_trouver)
    {
        printf("Moins\n");
        return 0;
    }
    
    if(choix_joueur = valeur_a_trouver)
    {
        printf("Bingo!\n");
        return 0;
    }
}

int main()
{
    int valeur_a_trouver;
    int choix_joueur;
    
    printf("Inserez une valeur a deviner: ");
    scanf("%d",&valeur_a_trouver);
    printf("Essayez de deviner la valeur inserrez: ");
    scanf("%d",&choix_joueur);
    plus_moins(choix_joueur, valeur_a_trouver);
}
