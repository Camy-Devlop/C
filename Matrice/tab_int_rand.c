/*
   auteur: adbaibi ismail
   date  : 13/01/2024    
*/
#include "libmatrice.h"

/*
  @brief	 	: 	remplie un tableau de valeur aleatoire

  @param	tab : 	tableau a louer
  @param	l	:	nombre de lignes dans le tableau
  @param	l	:	nombre de colonnes dans le tableau

  @return :
*/

void tab_int_rand(int **tab, unsigned int l, unsigned int c) 
{
    srand(time(NULL));
    unsigned int  i;
    unsigned int  j;

    i = 0;
    j = 0;
    if (l == 0 || c == 0 || !tab)
    return ;
    while (i < l)
    {
        while (j < c)
        {
            tab[i][j] = rand() % 101;
            j++;
        }j = 0;
        i++;
    }
}
