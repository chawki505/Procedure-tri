#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void tri_insertion(int tab[100], int taille) {
    int k;
    int temp;
    for (int i = 1; i < taille; i++) {
        temp = tab[i];
        k = i - 1;

        while ((tab[k] > temp) && (k >= 0)) {
            tab[k + 1] = tab[k];
            k = k - 1;
        }
        tab[k + 1] = temp;
    }
}


void tri_selection(int tab[100], int taille) {
    int temp, min;
    for (int i = 0; i < taille - 1; i++) {

        min = i;
        for (int j = i; j < taille; j++) {

            if (tab[min] > tab[j]) {
                min = j;
            }
        }
        if (min != i) {
            temp = tab[i];
            tab[i] = tab[min];
            tab[min] = temp;
        }
    }
}




void printTab(int tab[100], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("[%d]", tab[i]);
    }
}


int main() {

    int tab[100] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    printf("avant:\n");
    printTab(tab, 10);

    // tri_insertion(tab, 10);
    tri_selection(tab, 10);

    printf("\napres:\n");
    printTab(tab, 10);

    return 0;
}