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

t_matrice add_matrices(t_matrice *a, t_matrice *b)
{
	unsigned int 	i;//valeur qui va me permetre de me deplacer dans les ligne du tableau
	unsigned int 	j;//valeur qui va me permetre de me deplacer dans les colonne du tableau
	t_matrice 		c;//la novelle matrice

	i = 0;//init a 0 parce que le tableau commence a l'indice 0
	j = 0; // mene chose 
	
	//verifie si le son correcte sinon alors elle retourne null 
	if (a->lig != b->lig || a->col != b->col || !a->matrice ||!b->matrice)
		return (NULL);// return null il y a eu une error 
		
		//demande a la fonction de cree un tableau pour la matrice avec les dimasion voulu.
	c.matrice = get_tab_2d(a->lig, a->col);
	//s'il y a un problem alors il retourne null
	if (!c.matrice)
		return (NULL);
	c.lig = a->lig;
	c.col = a->col;
	
	//effecture l'operation d'add a + b = c 
	while (i < a->lig)
	{
		while (j < a->col)
		{
			c.matrice[i][j] = a->matrice[i][j] + b->matrice[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	return (c);
}
