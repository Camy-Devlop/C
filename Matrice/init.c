/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"

/*
  @breif	 : 	La fonction initialisera la matrice, et si l'allocation dynamique 
  						avec malloc n'a pas réussi, elle
  						libérera la mémoire déjà allouée et retournera null.

  @param a :	est la matrice a initialisée

  @return a:	retourne le paramettre initialiser sinon il retrounr null 
*/
t_matrice *init(t_matrice *a)
{
  unsigned int	i;

  i = 0;
  //verification des dimension de la matrice ne sois = a 0
  if (a->lig == 0 || a->col == 0)
    return NULL;
  // creation de nombre de ligne
  a->matrice = (int**)malloc(a->lig * sizeof(int*));
  if(!a->matrice)//verifie s'ils sont bien cree sinon retourne null
    return NULL;

  //creation de colone avec malloc = demande d'allocation de memoire de taille voulu avec sizeof
  while(i < a->lig)
  {
    a->matrice[i] = (int*)malloc(a->col * sizeof(int));
    if (!a->matrice  [i])
    {	//Si l'allocation dynamique avec malloc échoue, la fonction appellera la fonction free_matrice 
      //pour libérer la mémoire qui a été allouée juste avant.
      a->lig = i;
      free_matrice(a);//liberation de la memoire
      return NULL;
      }
    i++;
  }
  return a;
}