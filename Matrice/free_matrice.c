/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@brief	 : fonction qui vq libaire la memoire en appellant la fonction ft_free_tab
	
	@param	a: la matrice a libaire la memoire 
	''''''''''''''''''''ft_aq	'''''''''''''''''''''	@return :
*/
void free_matrice(t_matrice *a)
{
 	free_tab(a->matrice, a->lig);
 	a->matrice = (NULL);
    free(a->matrice);
}
