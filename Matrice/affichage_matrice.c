/*
   auteur: adbaibi ismail
   date  : 11/01/2024    
*/
#include "libmatrice.h"
/*
  @brief	 	: 	 affichier la matrice 
  @param	tab : 	la matrice qu'on veux. affichier 
  @return :
*/

void affichage_matrice(t_matrices a)
{
	unsigned int i;
	unsigned int j;
 
 	i = 0;
 	j = 0;
 	while(i < a.col)
 	{
 		while(j < a.lig)
 		{
 			printf("%d ",a.mat[i][j]);
 			j++;
 		}
 		j = 0;
 		i++;
 		printf("\n");
 	}
 	
 }
