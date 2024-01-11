/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@brief	 : 	fonction qui va cree un tableau pour la matrice de taille demander 
				no;bre de colonne et de ligne 
	
	@param	l: 	est le no;nre de ligne voulue
	@param  c: 	nombre de colone
	
	@return : 	retourne un tableau de dimation voulue si l ou c sont egaux a 0 il 
				retourne NULL
*/

int **ft_get_tab_2d(unsigned int l, unsigned int c)
{
	unsigned int	i;
	
	i = 0;
	if (l == 0 || c == 0)
		return (NULL);
	int **res = (int **)malloc(l * sizeof(int*));
	while (i < l)
	{
		res[i] = (int *)malloc(c * sizeof(int));
		if (!res[i])
		{
			ft_free_tab(res, i);
			return (NULL);
		}
		i++;
	}
	return (res);
} 
