#include <stdio.h>
#include "tableau.h"

int main() {
    int T[100];
    int n = 0;
    int choix;
    int tableauRempli = 0;

    do {
        printf("\n==============================\n");
        printf("   GESTION DE TABLEAU - MENU  \n");
        printf("==============================\n");
        printf("1. Saisir le tableau\n");
        printf("2. Afficher le tableau\n");
        printf("3. Trier par Tri a bulles\n");
        printf("4. Trier par Tri par selection\n");
        printf("5. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisirTableau(T, &n);
                tableauRempli = 1;
                break;
            case 2:
                if (tableauRempli) afficherTableau(T, n);
                else printf("\n[Attention] Veuillez saisir le tableau d'abord !\n");
                break;
            case 3:
                if (tableauRempli) {
                    triABulles(T, n);
                    afficherTableau(T, n);
                } else printf("\n[Attention] Tableau vide !\n");
                break;
            case 4:
                if (tableauRempli) {
                    triSelection(T, n);
                    afficherTableau(T, n);
                } else printf("\n[Attention] Tableau vide !\n");
                break;
            case 5:
                printf("\nAu revoir et bon courage pour la suite !\n");
                break;
            default:
                printf("\n[Erreur] Choix invalide,reessayez.\n");
        }
    } while (choix != 5);

    return 0;
}
