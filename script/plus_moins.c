#include<stdio.h>
#include<stdlib.h>


int plus_moins(int choix_joueur, int valeur_a_trouver) //function to display results
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

int display()
{
    printf("\nBienvenue dans plus_moins!\nDevinez la bonne valeur est vous remportez la partie.\n");
    printf("Pour jouer, attribuer un nombre d'essaies a votre concurrant\nLe nombre d'essaie sera equivalent au score du concurrant.\n");
    printf("Chaque movaise reponse du concurrant retira 1 points a leur score.\n");
    printf("Ce qui aura le plus de points a la fin sera le gangant.\nBonne Chance!\n");
    printf("\nDebut!");
}

int score_comparison(char player1_name[30], char player2_name[30], int player1_score, int player2_score) 
{
    if(player1_score > player2_score){
        printf("\n");
        printf("\nFelicitations ");
        puts(player1_name);
        printf("Vous avez gagner !");
    }
    if(player1_score < player2_score){
        printf("\n");
        printf("\nFelicitations ");
        puts(player2_name);
        printf("Vous avez gagner1 !");
    }
    if(player1_score == player2_score){
        printf("\n");
        printf("\nScore Egalite !");

    }
}


int main()
{
    int valeur_a_trouver;
    int choix_joueur;
    int turns;
    int player1_point;
    int player2_point;
    int player1_score;
    int player2_score;
    char player1_name[30];
    char player2_name[30];
    int count;

    count = 1;
    player1_score = 0;
    player2_score = 0;


    printf("Entrez votre nom joueur 1: ");
    fgets(player1_name, sizeof(player1_name), stdin);  // read string
    printf("Joueur 1 : ");
    puts(player1_name);    // display string

    printf("Entrez votre nom joueur 2: ");
    fgets(player2_name, sizeof(player2_name), stdin);
    printf("Joueur 2 : ");
    puts(player2_name);

    printf("Combien de parties voulez vous jouer: "); //Number of turns
    scanf("%d",&turns);

    display();


    for(int i=1; i<=turns; i++) //loop for amount of turns
    {
        printf("\n");
        printf("\nPartie %d",i);
        printf("\nJoueur 1, Inserez le nombre d'essaies pour Joueur 2(plus de 10): ");
        scanf("%d",&player2_point);
        printf("\nLe score de Joueur 2 est maintenant : %d", player2_point);//setting score and tries for player2

        valeur_a_trouver = rand() % 100 + 1;//random number generator

        while(count <= player2_point){

            printf("\nNumber = %d", valeur_a_trouver);
            printf("\nEssayez de deviner la valeur: ");
            scanf("%d",&choix_joueur);
            plus_moins(choix_joueur, valeur_a_trouver);

            if(valeur_a_trouver == choix_joueur){
                printf("\nVous avez reussi! Votre score est: %d", player2_point);
                printf("\n");
                count = 0;
                player2_score = player2_score + player2_point;
                break;
            }

            else{
                player2_point = player2_point - 1;//point calculator
                printf("\nLe score de Joueur 2 est maintenant : %d", player2_point);
            }

            if(player2_point == 0){
                printf("\nVous avez perdu cette partie ");
                puts(player2_name);
                break;
            }


        }

        printf("\nJoueur 2, Inserez le nombre d'essaies pour Joueur 1(plus de 10): ");
        scanf("%d",&player1_point);
        printf("\nLe score de Joueur 1 est maintenant : %d ", player1_point);//setting score and tries for player1

        valeur_a_trouver = rand() % 100 + 1;

        while(count <= player1_point){

            printf("\nNumber = %d", valeur_a_trouver);
            printf("\nEssayez de deviner la valeur: ");
            scanf("%d",&choix_joueur);
            plus_moins(choix_joueur, valeur_a_trouver);

            if(valeur_a_trouver == choix_joueur){
                printf("Vous avez reussi! Votre score est: %d", player1_point);
                player1_score = player1_score + player1_point;
                count = 0;
                break;
            }

            else{
                player1_point = player1_point - 1;//point calculator
                printf("\nLe score de Joueur 1 est maintenant : %d ", player1_point);
                printf("\n");
            }

            if(player1_point == 0){
                printf("\nVous avez perdu cette partie ");
                puts(player1_name);
                break;
            }
        }
        continue;

    }
    
    printf("\n");
    printf("\nLe Score finale de ");
    puts(player1_name);
    printf("= %d", player1_score);


    printf("\n");
    printf("\nLe Score finale de ");
    puts(player2_name);
    printf("= %d", player2_score);

    score_comparison(player1_name, player2_name, player1_score, player2_score);

    return 0;


}
