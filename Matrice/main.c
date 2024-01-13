/*
     auteur: adbaibi ismail
     date  : 13/01/2024    
*/

#include "libmatrice.h"
int main()
 {
     t_matrice a;
     a.lig = 4;
     a.col = 4;
     if (init(&a) != NULL)
     {
         int **n;
         n = get_tab_2d(4, 4);
         tab_int_rand(n, a.lig, a.col);
         replir_ligne(&a,n);
         affichage_matrice(a);
         t_matrice c = add_matrices(&a, &a);
         printf("=========add matrice avec elle meme ==========\n");
        affichage_matrice(c);
        c = multi_matrices(&a, &c);
        printf("=========multiplication de la matrice avec c ==========\n");
        affichage_matrice(c);

        free_matrice(&a);
        free_matrice(&c);
        free_tab(n, 4,4);
    }else
        printf("ERROR");
 }
