/*
   auteur: adbaibi ismail
   date  : 11/01/2024    
*/
#include "libmatrice.h"
/*
  @brief	 	: 	mettre à zero la zone memoire alloué dynamiquement 
                pour nettoyer la memoire et la liberer proprement

  @param	tab : 	tableau a louer
  @param	l	:	nombre de ligne dans le tableau  
  @param  c : nombre de colone dans le tableau
  @return :
*/
void memoire_reset_zero(int *zone_memoire)
{
  //je met a zero la zone de memoire passer en parametre 
  *zone_memoire = 0;
}
