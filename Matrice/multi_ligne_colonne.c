/*
   auteur: adbaibi ismail
   date  : 10/01/2024    
*/


#include "libmatrice.h"

int multi_ligne_colonne(t_matrices *a , t_matrices *b, unsigned int lig, unsigned col)
{
	unsigned int	i;
	int 			res;
	i = 0 ;
	res = 0;
	if (0 == a->col || 0 == a->lig || a->lig != b->lig || a->col != b->col || !a->mat ||!b->mat)
		return (NULL);
	while (i < a->col)
	{
		res =  res + (a->mat[lig][i] * b->mat[i][col]);
		i++;
	}
	return res;
}
