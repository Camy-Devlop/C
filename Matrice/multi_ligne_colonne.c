/*
   auteur: adbaibi ismail
   date  : 10/01/2024
*/

#include "libmatrice.h"
/*
  @breif	 : 	fonction qui va multiplication sur une ligne et sur une
  colonne

  @param a    :	est la matrice
  @param b    :	est la matrice
  @param lig  :	quelles ligne doit subire la multiplication
  @param col  :	quelle colonne doit subire la multiplication


  @return int :	retourne un entier qui est ma multiplication de de la lignc                  et de la colonnne
*/

int multi_ligne_colonne(t_matrice *a, t_matrice *b, unsigned int lig, unsigned col)
{
  unsigned int i;
  int res;
  i = 0;
  res = 0;
  if (0 == a->col || 0 == a->lig || a->col != b->lig ||
      !a->matrice || !b->matrice)
    return (NULL);
  while (i < a->col) {
    res = res + (a->matrice[lig][i] * b->matrice[i][col]);
    i++;
  }
  return res;
}
