/*
         auteur: adbaibi ismail
         date  : 08/01/2024
*/

#include "libmatrice.h"
int main() {
  t_matrice a;
  t_matrice b;
  a.lig = 2;
  a.col = 3;
  b.lig = 3;
  b.col = 4;

  init(&a);
  init(&b);

  if (init(&a) != NULL && init(&a) != NULL ) {
    int **n;
    int **m;
    n = get_tab_2d(a.lig, a.col);
    m = get_tab_2d(b.lig, b.col);
    tab_int_rand(n, a.lig, a.col);
    tab_int_rand(m, b.lig, b.col);

    replir_ligne(&a, n);
    replir_ligne(&b, m);
    affichage_matrice(a);
    printf("\n");

    affichage_matrice(b);

    t_matrice c = add_matrices(&a, &a);
    printf("=========add matrice avec elle meme ==========\n");
    affichage_matrice(c);
    c = multi_matrices(&a, &b);
    printf("=========multiplication de la matrice avec c ==========\n");
    affichage_matrice(c);

    free_matrice(&a);
    free_matrice(&b);
    free_matrice(&c);
    free_tab(n, a.lig, a.col);
    free_tab(m, b.lig, b.col);
  } else
    printf("ERROR");
}
