/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/
#include "libmatrice.h"

/*
  @brief	 	: 	libaire la memoire a loue dynamiquement 

  @param	tab : 	tableau a louer
  @param	l	:	nombre de ligne dans le tableau  

  @return :
*/

void free_tab(int **tab, unsigned int l, unsigned int c) 
{
  unsigned int	i;
  
  i = 0;
  if (!tab)
    return ;
  if (l != 0 && c != 0)
  {
    while (i < l)
    {
      memoire_reset_zero(&tab[i], c);
      free(tab[i]);
      i++;
    }
    free(tab);
  }
}
