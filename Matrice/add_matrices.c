/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@brief	 : 	fonction qui additionner deux matrice et retourner une nouvelle matrice
				si la location dynamique n'est pas fait il va retourner null
	
	@param	a: 	matrice a
	@param	b:	matrice b
	
	@return c: nouvelle matrice ou null
*/

t_matrices add_matrices(t_matrices *a, t_matrices *b)
{
	unsigned int 	i;
	unsigned int 	j;
	t_matrices 		c;

	i = 0;
	j = 0;
	if (a->lig != b->lig || a->col != b->col || !a->mat ||!b->mat)
		return (NULL);
	c.mat = ft_get_tab_2d(a->lig, a->col);
	if (!c.mat)
		return (NULL);
	c.lig = a->lig;
	c.col = a->col;
	while (i < a->lig)
	{
		while (j < a->col)
		{
			c.mat[i][j] = a->mat[i][j] + b->mat[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (c);
}
