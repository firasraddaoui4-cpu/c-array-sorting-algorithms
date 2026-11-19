#include <stdio.h>
#include "tableau.h"

void saisirTableau(int T[], int *n) {
    do {
        printf("Entrez le nombre d'elements (entre 1 et 100) : ");
        scanf("%d", n);
        if (*n <= 0 || *n > 100) {
            printf("Erreur ! Veuillez entrer un nombre valide entre 1 et 100.\n");
        }
    } while (*n <= 0 || *n > 100);

    printf("\n--- Saisie des elements du tableau ---\n");
    for (int i = 0; i < *n; i++) {
        printf("T[%d] = ", i);
        scanf("%d", &T[i]);
    }
}

void afficherTableau(int T[], int n) {
    printf("\nAffichage du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("T[%d] = %d\n", i, T[i]);
    }
    printf("\n");
}

void triABulles(int T[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
    }
    printf("\n[Succes] Tri a bulles effectue avec succes !\n");
}

void triSelection(int T[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (T[j] < T[min_idx]) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            temp = T[i];
            T[i] = T[min_idx];
            T[min_idx] = temp;
        }
    }
    printf("\n[Succes] Tri par selection effectue avec succes !\n");
}
