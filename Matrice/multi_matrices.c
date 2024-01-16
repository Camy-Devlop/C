/*
   auteur: adbaibi ismail
   date  : 10/01/2024
*/

#include "libmatrice.h"
/*
  @brief	 : 	fonction qui multplier deux matrice et retourner une
  nouvelle matrice si la location dynamique n'est pas fait il va retourner null

  @param	a: 	matrice a
  @param	b:	matrice b

  @return c: nouvelle matrice ou null
*/
t_matrice multi_matrices(t_matrice *a, t_matrice *b) {
  unsigned int i;
  unsigned int j;
  t_matrice c;

  i = 0;
  j = 0;
  if (a->col != b->lig || a->col == 0 || a->lig == 0|| b->lig ==0 || b->col == 0 || !a->matrice || !b->matrice)
    return (c);
  c.matrice = get_tab_2d(a->lig, b->col);
  if (!c.matrice)
    return (c);
  c.lig = a->lig;
  c.col = b->col;
  while (i < c.lig) {
    while (j < c.col) {
      c.matrice[i][j] = multi_ligne_colonne(a, b, i, j);
      j++;
    }
    j = 0;
    i++;
  }
  return (c);
}
