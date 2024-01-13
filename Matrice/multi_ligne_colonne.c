/*
   auteur: adbaibi ismail
   date  : 10/01/2024    
*/


#include "libmatrice.h"
/*
  @brief	 : 	fonction qui va faire la multiplication matricielle avec la 
				une ligne et la colone demander lig et col

  @param	a: liberé la matrice de la memoire 

  @return :
*/

int multi_ligne_colonne(t_matrice *a , t_matrice *b, unsigned int lig, unsigned col)
{
	unsigned int	i;
	int 			res;
	i = 0 ;
	res = 0;
    // verifier si tout est conforme a la demander dans les parametre
	if (0 == a->col || 0 == a->lig || a->lig != b->lig || a->col != b->col || !a->matrice ||!b->matrice)
		return (NULL);
    // litiplication de la ligne avec la colonne
	while (i < a->col)
	{
		res =  res + (a->matrice[lig][i] * b->matrice[i][col]);
		i++;
	}
	return res;
}
