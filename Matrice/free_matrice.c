/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"

/*
  @brief	 : fonction qui va liberer la memoire en appellant la fonction free_tab

  @param	a: liberé la matrice de la memoire 

  @return :
*/
void free_matrice(t_matrice *a)
{
  free_tab(a->matrice, a->lig, a->col);
  a->matrice = NULL;
  free(a->matrice);
}
