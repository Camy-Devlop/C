/*
   auteur: adbaibi ismail
   date  : 11/01/2024    
*/
#include "libmatrice.h"
/*
  @brief	 	: 	mettre à zero la zone memoire alloué dynamiquement 
                pour nettoyer la memoire et la liberer proprement

  @param	tab : 	tableau a louer
  @param	l	:	taille du tableau a nettoyé
  @return :
*/
void memoire_reset_zero(int *zone_memoire, unsigned int n)
{
   unsigned int   i;

   i = 0;
  //je met a zero la zone de memoire passer en parametre 
   while (i < n)
   {
      zone_memoire[i] = 0;
      i++;
   }
}
