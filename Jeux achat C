#include <stdio.h>

int main() {
    // Déclaration des variables
    int choix;
    int argent = 100;
    int score = 0;
    int niveau = 1;

    int inventaire[5] = {0, 0, 0, 0, 0};  // Tableau pour stocker les objets du joueur

    // Boucle principale du jeu
    while (1) {
        printf("==== Mini Jeu Textuel ====\n");
        printf("1. Acheter\n");
        printf("2. Vendre\n");
        printf("3. Explorer\n");
        printf("4. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Vous avez choisi d'acheter.\n");
                argent -= 50;
                inventaire[niveau - 1]++;  // Ajoute un objet à l'inventaire
                break;

            case 2:
                printf("Vous avez choisi de vendre.\n");
                if (inventaire[niveau - 1] > 0) {
                    argent += 25;
                    inventaire[niveau - 1]--;  // Retire un objet de l'inventaire
                } else {
                    printf("Vous n'avez pas cet objet dans votre inventaire.\n");
                }
                break;

            case 3:
                printf("Vous avez choisi d'explorer.\n");
                if (niveau == 3) {
                    printf("Vous avez trouvé un trésor ! Votre score augmente de 10.\n");
                    score += 10;
                } else {
                    printf("Rien d'intéressant ici. Continuez à chercher.\n");
                }
                niveau++;
                break;

            case 4:
                printf("Vous avez choisi de quitter. Fin du jeu.\n");
                return 0;

            default:
                printf("Option invalide. Veuillez choisir à nouveau.\n");
                break;
        }

        // Affichage des informations du joueur
        printf("Argent : %d\n", argent);
        printf("Score : %d\n", score);
        printf("Niveau : %d\n", niveau);

        printf("Inventaire : ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", inventaire[i]);
        }
        printf("\n\n");
    }

    return 0;
}
