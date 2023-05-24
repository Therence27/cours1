#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMPUTERS 50

// Structure représentant un ordinateur
typedef struct {
    char marque[20];
    char modele[20];
    int stock;
    float prix;
} Ordinateur;

// Variables globales
Ordinateur ordinateurs[MAX_COMPUTERS];
int totalOrdinateurs = 0;

// Fonction pour ajouter un nouvel ordinateur
void ajouterOrdinateur() {
    if (totalOrdinateurs == MAX_COMPUTERS) {
        printf("La capacité maximale d'ordinateurs est atteinte.\n");
        return;
    }

    Ordinateur nouvelOrdinateur;
    printf("Marque : ");
    scanf("%s", nouvelOrdinateur.marque);
    printf("Modèle : ");
    scanf("%s", nouvelOrdinateur.modele);
    printf("Stock : ");
    scanf("%d", &nouvelOrdinateur.stock);
    printf("Prix : ");
    scanf("%f", &nouvelOrdinateur.prix);

    ordinateurs[totalOrdinateurs] = nouvelOrdinateur;
    totalOrdinateurs++;

    printf("L'ordinateur a été ajouté avec succès.\n");
}

// Fonction pour afficher tous les ordinateurs
void afficherOrdinateurs() {
    if (totalOrdinateurs == 0) {
        printf("Aucun ordinateur enregistré.\n");
        return;
    }

    printf("==== Liste des ordinateurs ====\n");
    for (int i = 0; i < totalOrdinateurs; i++) {
        printf("Ordinateur %d\n", i + 1);
        printf("Marque : %s\n", ordinateurs[i].marque);
        printf("Modèle : %s\n", ordinateurs[i].modele);
        printf("Stock : %d\n", ordinateurs[i].stock);
        printf("Prix : %.2f\n\n", ordinateurs[i].prix);
    }
}

// Fonction pour mettre à jour le stock d'un ordinateur
void mettreAJourStock() {
    if (totalOrdinateurs == 0) {
        printf("Aucun ordinateur enregistré.\n");
        return;
    }

    int choix;
    printf("Choisissez l'ordinateur à mettre à jour (1-%d) : ", totalOrdinateurs);
    scanf("%d", &choix);

    if (choix < 1 || choix > totalOrdinateurs) {
        printf("Choix invalide.\n");
        return;
    }

    int nouveauStock;
    printf("Nouveau stock : ");
    scanf("%d", &nouveauStock);

    ordinateurs[choix - 1].stock = nouveauStock;

    printf("Le stock de l'ordinateur a été mis à jour avec succès.\n");
}

int main() {
    int choix;

    while (1) {
        printf("==== Gestion du magasin d'informatique ====\n");
        printf("1. Ajouter un nouvel ordinateur\n");
        printf("2. Afficher tous les ordinateurs\n");
        printf("3. Mettre à jour le stock d'un ordinateur\n");
        printf("4. Quitter\n");
        printf("Choisissez une option : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouterOrdinateur();
                break;
            case 2:
                afficherOrdinateurs();
                break;
            case 3:
                mettreAJourStock();
                break;
            case 4:
                printf("Fin du programme.\n");
                return 0;
            default:
                printf("Option invalide. Veuillez choisir à nouveau.\n");
                break;
        }
    }

    return 0;
}
