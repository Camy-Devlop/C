/*
   auteur: adbaibi ismail
   date  : 08/01/2024    
*/

#include "libmatrice.h"
/*
	@breif	 : 	fonction qui va  initialiser la matrice si malloc n'a pas cree de memoire
				pour la matrice alors il libaire la memoire qui a deja cree retourne null
	
	@param a :	est la matrice a init
	
	@return a:	retourne le paramettre init  sinon il retrounr null 
*/

t_matrices *init(t_matrices *a)
{
	unsigned int	i;

	i = 0;
	if (a->lig == 0 || a->col == 0)
		return (NULL);
	a->matrice = (int**)malloc(a->lig * sizeof(int*));
	if(!a->matrice)
		return (NULL);
	while(i < a->lig)
 	{
 		a->matrice[i] = (int*)malloc(a->col * sizeof(int));
 		if (!a->matrice[i])
 		{	
 			a->lig = i;
 			free_matrice(&a);
 			return (NULL);
  		}
 		i++;
 	}
 	return a;
} 
