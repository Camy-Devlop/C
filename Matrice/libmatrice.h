/*
   auteur: adbaibi ismail
   date  : 08/01/2024
*/

#ifndef LIBMATRICE_H
#define LIBMATRICE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/*
  @brief	 	: type matrice avec nombre de ligne et de colonne

  @param	mat	: 	tableau de x dimantion d'entier
  @param	lig	:	nonbre de ligne
  @param	col	:	nombre de colonne
*/

typedef struct s_matrice {
  int **matrice;
  unsigned int lig;
  unsigned int col;

} t_matrice;

void				tab_int_rand(int **tab, unsigned int l, unsigned int c) 
void				memoire_reset_zero(int *memoire, unsigned int n);
void				free_tab(int **tab, unsigned int l, unsigned int c);
void				free_matrice(t_matrice *a);

int					**get_tab_2d(unsigned int l, unsigned int c);
t_matrice		*init(t_matrice *a);

t_matrice		add_matrices(t_matrice *a, t_matrice *b);
int					multi_ligne_colonne(t_matrice *a, t_matrice *b, unsigned int lig, unsigned col);
t_matrice		multi_matrices(t_matrice *a, t_matrice *b);
void				replir_ligne(t_matrice *a, int **tab);

#endif