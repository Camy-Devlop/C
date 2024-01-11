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

typedef struct s_matrices
 {
  int 			**mat;
  unsigned int 	lig;
  unsigned int 	col;

 }t_matrices;

void ft_free_tab(int **tab, unsigned int l);
void ft_free_matrices(t_matrices *a);

int **ft_get_tab_2d(unsigned int l, unsigned int c);
t_matrices *ft_init(t_matrices *a);

t_matrices ft_add_matrices(t_matrices *a, t_matrices *b);
t_matrices ft_multi_matrices(t_matrices *a, t_matrices *b);
int multi_ligne_colonne(t_matrices *a , t_matrices *b, unsigned int lig, unsigned col);

void ft_replir_ligne(t_matrices *a, int **tab);
void ft_affichage_matrice(t_matrices a);

#include "ft_init.c"
#include "ft_get_tab_2d.c"
#include "ft_replir_ligne.c"
#include "ft_affichage_matrice.c"
#include "ft_add_matrices.c"
#include "ft_free_tab.c"
#include "ft_free_matrice.c"
#include "ft_multi_ligne_colonne.c"
#include "ft_multi_matrices.c"

#endif
