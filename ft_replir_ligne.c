/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@breif : 	cette fonction remplie la matrice avec les valeur qui vient 
				du tablleau.
	
	@param a  :	variable de type matrice 
	@param tab:	tableau de meme dimasion que la matrice
	
	@return	  :	ne retoune rien parce que la matrice a ete passer en paramtre pointeur
	  
*/
void ft_replir_ligne(t_matrices *a, int **tab)
{
 	unsigned int i;
 	unsigned int j;

 	i = 0;
 	j = 0;
 	if (!tab || a->col == 0 || a->lig == 0 || !a->mat)
 		return ;
 	while(i < a->lig)
 	{
 		while (j < a->col)
 		{
 			a->mat[i][j] = tab[i][j];
 			j++;
 		}
 		j = 0;
 		i++;
 	}
}
