/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"

void affichage_matrice(t_matrice a)
{
  unsigned int i;
  unsigned int j;

  i = 0;
  j = 0;
  while(i < a.lig)
  {
    while(j < a.col)
    {
      printf("%d ",a.matrice[i][j]);
      j++;
    }
    j = 0;
    i++;
    printf("\n");
  }
 }
