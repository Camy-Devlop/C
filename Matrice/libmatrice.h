/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#ifndef LIBMATRICE_H
#define LIBMATRICE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
  @brief	 	: type matrice avec no;bred e ligne et de colonne 

  @param	mat	: 	tableau de x dimantion
  @param	lig	:	nonbre de ligne 
  @param	col	:	nombre de colonne
*/

typedef struct s_matrice
 {
  int 			**matrice;
  unsigned int 	lig;
  unsigned int 	col;

 }t_matrice;

void free_tab(int **tab, unsigned int l);
void free_matrice(t_matrice *a);

void tab_int_rand(int **tab, unsigned int l, unsigned int c);

int **get_tab_2d(unsigned int l, unsigned int c);
t_matrice *init(t_matrice *a);

t_matrice add_matrices(t_matrice *a, t_matrice *b);
t_matrice multi_matrices(t_matrice *a, t_matrice *b);
int multi_ligne_colonne(t_matrice *a , t_matrice *b, unsigned int lig, unsigned col);

void replir_ligne(t_matrice *a, int **tab);
void affichage_matrice(t_matrice a);

#endif
