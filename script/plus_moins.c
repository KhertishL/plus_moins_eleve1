#include<stdio.h>
#include<stdlib.h>

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

int game(int valeur_a_trouver, int choix_joueur)
{
   valeur_a_trouver = rand() % 100 + 1;
    printf("Essayez de deviner la valeur: ");
    scanf("%d",&choix_joueur);
    plus_moins(choix_joueur, valeur_a_trouver);
    
}

int main()
{
    int valeur_a_trouver;
    int choix_joueur;
    int difficulty;
    int count;
    
    printf("Choisissez une difficulter 1,2 ou 3\n1.facile(essaie illimites)\n2.moyen(25 essaies)\n3.difficile(10 essaies)\n");
    printf("Difficulter : ");
    scanf("%d",&difficulty);
    
    if(difficulty == 1){
        
        game(valeur_a_trouver, choix_joueur);
        while(choix_joueur != valeur_a_trouver)
            {
                printf("Essayez de deviner la valeur: ");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
            } 
    }
    
    if(difficulty == 2){
        
        count = 1;
        game(valeur_a_trouver, choix_joueur);
        while(choix_joueur != valeur_a_trouver && count < 25)
            {
                printf("Essayez de deviner la valeur: ");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
                count++;
                if(count == 25){
                    printf("Vous avez perdu.");
                }
            } 
    }
    
    if(difficulty == 3){
        
        count = 1;
        game(valeur_a_trouver, choix_joueur);
        while(choix_joueur != valeur_a_trouver && count < 10)
            {
                printf("Essayez de deviner la valeur: ");
                scanf("%d",&choix_joueur);
                plus_moins(choix_joueur, valeur_a_trouver);
                count++;
                if(count == 10){
                    printf("Vous avez perdu.");
                }
            } 
    }
    
}
