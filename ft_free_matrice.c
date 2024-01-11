/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@brief	 : fonction qui vq libaire la memoire en appellant la fonction ft_free_tab
	
	@param	a: la matrice a libaire la memoire 
	
	@return :
*/
void ft_free_matrice(t_matrices *a)
{
 	ft_free_tab(a->mat, a->lig);
 	a->mat = (NULL);
}
